/*
 *  Quackle -- Crossword game artificial intelligence and analysis tool
 *  Copyright (C) 2005-2006 Jason Katz-Brown and John O'Laughlin.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  
 *  02110-1301  USA
 */

#include <iostream>

#include "bogowinplayer.h"
#include "datamanager.h"
#include "endgameplayer.h"
#include "clock.h"
#include "strategyparameters.h"
#include "gameparameters.h"

//#define DEBUG_COMPUTERPLAYER

using namespace Quackle;

SmartBogowin::SmartBogowin()
{
	m_name = MARK_UV("Smart Bogowin");
	m_id = 110;
	m_minIterationsPerSecond = 2;
	m_maxIterationsPerSecond = 5;
	
	m_nestedMinIterationsPerSecond = 1;
	m_nestedMaxIterationsPerSecond = 1;

	m_parameters.secondsPerTurn = 20;

	m_additionalInitialCandidates = 13;
}

SmartBogowin::~SmartBogowin()
{
}

double SmartBogowin::bogopoints(Move &move)
{
	if (move.win == 1) return move.equity + 1000;
	if (move.win == 0) return move.equity - 1000;
	
	int spread = m_simulator.currentPosition().spread(m_simulator.currentPosition().currentPlayer().id());
	int tiles = m_simulator.currentPosition().bag().size() + 7;

	if (move.win <= QUACKLE_STRATEGY_PARAMETERS->bogowin(-300, tiles, 0))
		return move.equity - 1000;
	if (move.win >= QUACKLE_STRATEGY_PARAMETERS->bogowin(300, tiles, 0))
		return move.equity + 1000;
	
	for (int x = -300; x <= 299; x++)
	{
		double lower = QUACKLE_STRATEGY_PARAMETERS->bogowin(x, tiles, 0);
		double upper = QUACKLE_STRATEGY_PARAMETERS->bogowin(x + 1, tiles, 0);

		if ((move.win >= lower) && (move.win <= upper))
		{
			double fraction = (move.win - lower) / (upper - lower);
			return (double)x + fraction - spread;
		}
	}

	return 0;
}

Move SmartBogowin::move()
{
	return moves(1).back();
}

MoveList SmartBogowin::moves(int nmoves)
{
	Stopwatch stopwatch;
	
	if (currentPosition().bag().empty())
    {
			signalFractionDone(0);
		EndgamePlayer endgame;
		endgame.setPosition(currentPosition());
		return endgame.moves(nmoves);
	}
	
	//UVcout << "SmartBogowin generating move from position:" << endl;
	//UVcout << currentPosition() << endl;

	const int zerothPrune = 33;
	int plies = 2;
	
	if (currentPosition().bag().size() <= QUACKLE_PARAMETERS->rackSize() * 2)
		plies = -1;

	const int initialCandidates = m_additionalInitialCandidates + nmoves;
	
	currentPosition().kibitz(initialCandidates);
	
	m_simulator.setIncludedMoves(m_simulator.currentPosition().moves());
	m_simulator.pruneTo(zerothPrune, initialCandidates);
	m_simulator.makeSureConsideredMovesAreIncluded();
	m_simulator.setIgnoreOppos(false);
	
	MoveList staticMoves = m_simulator.moves(/* prune */ true, /* sort by equity */ false);
	m_simulator.moveConsideredMovesToBeginning(staticMoves);
	
	//UVcout << "Bogo static moves: " << staticMoves << endl;
	//UVcout << "Bogo considered moves: " << m_simulator.consideredMoves() << endl;
	
	MoveList firstMove;
	MoveList simmedMoves;

	MoveList::const_iterator it = staticMoves.begin();
	
	firstMove.push_back(*it);

	signalFractionDone(0);

	m_simulator.setIncludedMoves(firstMove);
	m_simulator.simulate(plies, minIterations());
	
	Move best = *m_simulator.moves(/* prune */ true, /* sort by win */ true).begin();
	simmedMoves.push_back(best);
	
	double bestbp = bogopoints(best);
	
	//UVcout << "firstMove: " << best << endl;

	for (++it; it != staticMoves.end(); ++it)
	{
		signalFractionDone(max(static_cast<float>(simmedMoves.size()) / static_cast<float>(staticMoves.size()), static_cast<float>(stopwatch.elapsed()) / static_cast<float>(m_parameters.secondsPerTurn)));

		if (shouldAbort())
			goto sort_and_return;

		//UVcout << "best move: " << best << " with " << bestbp  << " bogopoints." << endl;
		MoveList lookFurther;
		lookFurther.push_back(*it);
		m_simulator.setIncludedMoves(lookFurther);
		m_simulator.simulate(plies, minIterations());
		Move move = *m_simulator.moves(/* prune */ true, /* sort by win */ true).begin();
		double movebp = bogopoints(move);
		//UVcout << "we just simmed " << move << "; bogopoints: " << movebp << endl;
	
		if (movebp + 1.96 * 35.0 / sqrt((double)minIterations()) > bestbp)
		{
			m_simulator.simulate(plies, maxIterations() - minIterations());
			Move move2 = *m_simulator.moves(true, true).begin();
			movebp = bogopoints(move2);
			//UVcout << "sim it some more: " << move2 << " bogopoints: " << movebp << endl;
			simmedMoves.push_back(move2);
	
			if (move2.win > best.win) 
			{
				best = move2;
				bestbp = movebp;
			}
		}
		else
		{
			simmedMoves.push_back(move);
		}
		
		if (stopwatch.exceeded(m_parameters.secondsPerTurn))
		{
			//UVcout << "Bogowinplayer stopwatch exceeded its limit " << m_parameters.secondsPerTurn << ". Returning early." << endl;
			goto sort_and_return;
		}
	}	

	//UVcout << "We had extra time! whoopee!" << endl;

	sort_and_return:
	MoveList::sort(simmedMoves, MoveList::Win);
	MoveList ret;
	MoveList::const_iterator simmedEnd = simmedMoves.end();
	int i = 0;
	for (MoveList::const_iterator simmedIt = simmedMoves.begin();
	     (simmedIt != simmedEnd); ++i, ++simmedIt)
	{
		if (i < nmoves || m_simulator.isConsideredMove(*simmedIt))
			ret.push_back(*simmedIt);
	}

	//UVcout << "bogo returning moves:\n" << ret << endl;
	return ret;
}


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

#include "strongplayer.h"

//#define DEBUG_COMPUTERPLAYER

using namespace Quackle;

StrongPlayer::StrongPlayer()
{
	m_name = MARK_UV("Strong Player");
}

StrongPlayer::~StrongPlayer()
{
}

Move StrongPlayer::move()
{
	UVcout << "StrongPlayer generating move from position:" << endl;
	UVcout << m_simulator.currentPosition() << endl;

	const int initialPlayNumber = 50;
	const int zerothPrune = 13;
	const int zerothPruneMax = 20;
	const int firstIterations = 40;

	m_simulator.currentPosition().kibitz(initialPlayNumber);
	m_simulator.setIncludedMoves(m_simulator.currentPosition().moves());

	UVcout << "Statically evaluated plays:" << endl;
	UVcout << m_simulator.currentPosition().moves() << endl;

	m_simulator.pruneTo(zerothPrune, zerothPruneMax);

	UVcout << "Pruned to plays within " << zerothPrune << ":" << endl;
	UVcout << m_simulator.moves(true) << endl;

	m_simulator.setIgnoreOppos(true);
	m_simulator.simulate(2, firstIterations);

	UVcout << "after " << firstIterations << " iterations of us-only sim:" << endl;
	UVcout << m_simulator.moves(true) << endl;

	const int firstPrune = 6;
	const int firstPruneMax = 6;
	const int secondIterations = 150;

	m_simulator.pruneTo(firstPrune, firstPruneMax);

	MoveList moves(m_simulator.moves(true));
	UVcout << "Pruned to plays within " << firstPrune << ":" << endl;
	UVcout << moves << endl;

	if (moves.size() == 1)
		return moves.back();

	m_simulator.resetNumbers();
	m_simulator.setIgnoreOppos(false);
	m_simulator.simulate(2, secondIterations);

	moves = m_simulator.moves(true);

	UVcout << "after " << secondIterations << " iterations of two-ply sim:" << endl;
	UVcout << moves << endl;

	return moves[0];
}


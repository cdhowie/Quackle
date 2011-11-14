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

#include "computerplayercollection.h"

#include "computerplayer.h"
#include "bogowinplayer.h"
#include "endgameplayer.h"
#include "resolvent.h"

using namespace Quackle;

ComputerPlayerCollection::ComputerPlayerCollection()
{
}

Player ComputerPlayerCollection::createPlayer(ComputerPlayer *computerPlayer)
{
	Player ret(computerPlayer->name(), Player::ComputerPlayerType, computerPlayer->id());
	ret.setComputerPlayer(computerPlayer);
	return ret;
}

void ComputerPlayerCollection::addPlayer(ComputerPlayer *computerPlayer)
{
	push_back(createPlayer(computerPlayer));
}

ComputerPlayerCollection ComputerPlayerCollection::fullCollection()
{
	ComputerPlayerCollection ret;
	ret.addPlayer(new EndgamePlayer());
	ret.addPlayer(new StaticPlayer());
	ret.addPlayer(new FiveMinutePlayer());
	ret.addPlayer(new TwentySecondPlayer());
	ret.addPlayer(new TorontoPlayer());

	return ret;
}
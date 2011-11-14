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

#ifndef QUACKER_QUACKERSETTINGS_H
#define QUACKER_QUACKERSETTINGS_H

#include <QString>

#include <quackleio/util.h>

#include "letterboxsettings.h"

// This singleton class keeps all Quacker settings in one place.
// It also maintains one instance of a LetterboxSettings and QuackleIO::UtilSettings.

enum BritishColoring { NoBritishColoring = 0, TextBritishColoring = 1, TileBritishColoring = 2};

class QuackerSettings
{
public:
	QuackerSettings();
	~QuackerSettings();

	static QuackerSettings *self();

	// reads and writes Quacker and Letterbox settings
	void readSettings();
	void writeSettings();

	int britishColoring;
	bool verboseLabels;
	bool scoreLabels;

private:
	static QuackerSettings *m_self;

	QuackleIO::UtilSettings m_utilSettings;
	LetterboxSettings m_letterboxSettings;
};

#endif

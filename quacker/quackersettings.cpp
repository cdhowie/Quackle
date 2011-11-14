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

#include <QtGui>

#include "customqsettings.h"
#include "quackersettings.h"

QuackerSettings *QuackerSettings::m_self = 0;
QuackerSettings *QuackerSettings::self()
{
	return m_self;
}

QuackerSettings::QuackerSettings()
	: britishColoring(TextBritishColoring), verboseLabels(false), scoreLabels(true)
{
	m_self = this;
}

QuackerSettings::~QuackerSettings()
{
}

void QuackerSettings::readSettings()
{
	CustomQSettings settings;
	britishColoring = settings.value("quackle/settings/british-coloring", britishColoring).toInt();
	verboseLabels = settings.value("quackle/settings/verbose-labels", verboseLabels).toBool();
	scoreLabels = settings.value("quackle/settings/score-labels", scoreLabels).toBool();
	QuackleIO::UtilSettings::self()->vowelFirst = settings.value("quackle/settings/vowel-first", QuackleIO::UtilSettings::self()->vowelFirst).toBool();
	QuackleIO::UtilSettings::self()->octothorpBritish = settings.value("quackle/settings/octothorp-british", QuackleIO::UtilSettings::self()->octothorpBritish).toBool();

	m_letterboxSettings.readSettings();
}

void QuackerSettings::writeSettings()
{
	CustomQSettings settings;
	settings.setValue("quackle/settings/british-coloring", britishColoring);
	settings.setValue("quackle/settings/verbose-labels", verboseLabels);
	settings.setValue("quackle/settings/score-labels", scoreLabels);
	settings.setValue("quackle/settings/vowel-first", QuackleIO::UtilSettings::self()->vowelFirst);
	settings.setValue("quackle/settings/octothorp-british", QuackleIO::UtilSettings::self()->octothorpBritish);

	m_letterboxSettings.writeSettings();
}


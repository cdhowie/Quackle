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

#include <uv.h>

#include "configpages.h"
#include "letterboxsettings.h"
#include "quackersettings.h"

LetterboxPage::LetterboxPage(QWidget *parent)
	: ConfigPage(parent)
{
	m_pageTitle = tr("Letterbox");

	QGroupBox *timingsGroup = new QGroupBox(tr("Quiz timings"));

	QLabel *baseLabel = new QLabel(tr("Initial wait:"));
	m_baseSpin = new QSpinBox;
	m_baseSpin->setSuffix(tr(" msec"));
	m_baseSpin->setMinimum(0);
	m_baseSpin->setMaximum(100000);
	m_baseSpin->setSingleStep(500);

	QLabel *extraLabel = new QLabel(tr("Extra wait per anagram:"));
	m_extraSpin = new QSpinBox;
	m_extraSpin->setSuffix(tr(" msec"));
	m_extraSpin->setMinimum(0);
	m_extraSpin->setMaximum(100000);
	m_extraSpin->setSingleStep(500);

	QGridLayout *timingsLayout = new QGridLayout;
	timingsLayout->addWidget(baseLabel, 0, 0);
	timingsLayout->addWidget(m_baseSpin, 0, 1);
	timingsLayout->addWidget(extraLabel, 1, 0);
	timingsLayout->addWidget(m_extraSpin, 1, 1);
	timingsGroup->setLayout(timingsLayout);

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(timingsGroup);
	mainLayout->addStretch(1);
	setLayout(mainLayout);
}

void LetterboxPage::readConfig()
{
	m_baseSpin->setValue(LetterboxSettings::self()->msecWaitBase);
	m_extraSpin->setValue(LetterboxSettings::self()->msecWaitExtraPerSolution);
}

void LetterboxPage::writeConfig()
{
	LetterboxSettings::self()->msecWaitBase = m_baseSpin->value();
	LetterboxSettings::self()->msecWaitExtraPerSolution = m_extraSpin->value();
}

InterfacePage::InterfacePage(QWidget *parent)
	: ConfigPage(parent)
{
	m_pageTitle = tr("Interface");

	QGroupBox *boardGroup = new QGroupBox(tr("Board"));

	m_verboseLabelsCheck = new QCheckBox(tr("Show &bonus square labels"));
	m_scoreLabelsCheck = new QCheckBox(tr("Show &letter score labels"));

	QLabel *britishColoringLabel = new QLabel(tr("British coloring:"));
	m_britishColoringCombo = new QComboBox;
	QStringList britishColorings;
	britishColorings << tr("None") << tr("Text") << tr("Tile");
	m_britishColoringCombo->addItems(britishColorings);

	QGridLayout *checkersLayout = new QGridLayout;
	checkersLayout->addWidget(britishColoringLabel, 0, 0);
	checkersLayout->addWidget(m_britishColoringCombo, 0, 1);
	checkersLayout->addWidget(m_verboseLabelsCheck, 1, 0, 1, 2);
	checkersLayout->addWidget(m_scoreLabelsCheck, 2, 0, 1, 2);
	boardGroup->setLayout(checkersLayout);

	QGroupBox *miscellanyGroup = new QGroupBox(tr("Miscellany"));
	m_vowelFirstCheck = new QCheckBox(tr("&Vowel-first alphabetizing"));
	m_octothorpCheck = new QCheckBox(tr("&Octothorp British words"));

	QGridLayout *miscellanyLayout = new QGridLayout;
	miscellanyLayout->addWidget(m_vowelFirstCheck, 0, 0);
	miscellanyLayout->addWidget(m_octothorpCheck, 1, 0);
	miscellanyGroup->setLayout(miscellanyLayout);

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(boardGroup);
	mainLayout->addWidget(miscellanyGroup);
	mainLayout->addStretch(1);
	setLayout(mainLayout);
}

void InterfacePage::readConfig()
{
	m_britishColoringCombo->setCurrentIndex(QuackerSettings::self()->britishColoring);
	m_vowelFirstCheck->setChecked(QuackleIO::UtilSettings::self()->vowelFirst);
	m_verboseLabelsCheck->setChecked(QuackerSettings::self()->verboseLabels);
	m_scoreLabelsCheck->setChecked(QuackerSettings::self()->scoreLabels);
	m_octothorpCheck->setChecked(QuackleIO::UtilSettings::self()->octothorpBritish);
}

void InterfacePage::writeConfig()
{
	QuackerSettings::self()->britishColoring = m_britishColoringCombo->currentIndex();
	QuackleIO::UtilSettings::self()->vowelFirst = m_vowelFirstCheck->isChecked();
	QuackerSettings::self()->verboseLabels = m_verboseLabelsCheck->isChecked();
	QuackerSettings::self()->scoreLabels = m_scoreLabelsCheck->isChecked();
	QuackleIO::UtilSettings::self()->octothorpBritish = m_octothorpCheck->isChecked();
}


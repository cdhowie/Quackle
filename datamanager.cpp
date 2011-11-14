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

#include <time.h>
#include <sys/stat.h>

#include "catchall.h"
#include "computerplayer.h"
#include "datamanager.h"
#include "alphabetparameters.h"
#include "boardparameters.h"
#include "evaluator.h"
#include "catchall.h"
#include "gameparameters.h"
#include "lexiconparameters.h"
#include "strategyparameters.h"

#define QUACKLDEBUG

using namespace Quackle;

DataManager *DataManager::m_self = 0;

DataManager::DataManager()
	: m_evaluator(0), m_parameters(0), m_alphabetParameters(0), m_boardParameters(0), m_lexiconParameters(0), m_strategyParameters(0)
{
	m_self = this;
	setDataDirectory(".");
    seedRandomNumbers(time(NULL));

	m_alphabetParameters = new EnglishAlphabetParameters;
	m_evaluator = new CatchallEvaluator;
	m_parameters = new EnglishParameters;
	m_boardParameters = new EnglishBoard;
	m_lexiconParameters = new LexiconParameters;
	m_strategyParameters = new StrategyParameters;
}

DataManager::~DataManager()
{
	delete m_evaluator;
	delete m_parameters;
	delete m_alphabetParameters;
	delete m_boardParameters;
	delete m_lexiconParameters;
	delete m_strategyParameters;

	cleanupComputerPlayers();
}

bool DataManager::isGood() const
{
	return m_lexiconParameters->hasSomething();
}

void DataManager::setEvaluator(Evaluator *evaluator)
{
	delete m_evaluator;
	m_evaluator = evaluator;
}

void DataManager::setParameters(GameParameters *parameters)
{
	delete m_parameters;
	m_parameters = parameters;
}

void DataManager::setAlphabetParameters(AlphabetParameters *alphabetParameters)
{
	delete m_alphabetParameters;
	m_alphabetParameters = alphabetParameters;
}

void DataManager::setBoardParameters(BoardParameters *boardParameters)
{
	delete m_boardParameters;
	m_boardParameters = boardParameters;
}

void DataManager::setLexiconParameters(LexiconParameters *lexiconParameters)
{
	delete m_lexiconParameters;
	m_lexiconParameters = lexiconParameters;
}

void DataManager::setStrategyParameters(StrategyParameters *strategyParameters)
{
	delete m_strategyParameters;
	m_strategyParameters = strategyParameters;
}

void DataManager::setComputerPlayers(const PlayerList &playerList)
{
	cleanupComputerPlayers();
	m_computerPlayers = playerList;
}

void DataManager::cleanupComputerPlayers()
{
	const PlayerList::iterator end(m_computerPlayers.end());
	for (PlayerList::iterator it = m_computerPlayers.begin(); it != end; ++it)
		delete (*it).computerPlayer();
	
	m_computerPlayers.clear();
}

bool DataManager::fileExists(const string &filename)
{
	struct stat buf;
	int i = stat(filename.c_str(), &buf);
	if (i == 0)
		return true;
	else
		return false;
}

string DataManager::findDataFile(const string &subDirectory, const string &lexicon, string file)
{
	string firstTry = makeDataFilename(subDirectory, lexicon, file);
	if (fileExists(firstTry))
		return firstTry;

	string secondTry = makeDataFilename(subDirectory, m_backupLexicon, file);
	if (fileExists(secondTry))
		return secondTry;
	
	return string();
}

string DataManager::findDataFile(const string &subDirectory, string file)
{
	string firstTry = makeDataFilename(subDirectory, file);
	if (fileExists(firstTry))
		return firstTry;

	return string();
}

string DataManager::makeDataFilename(const string &subDirectory, const string &lexicon, string file)
{
	return m_dataDirectory + "/" + subDirectory + "/" + lexicon + "/" + file;
}

string DataManager::makeDataFilename(const string &subDirectory, string file)
{
	return m_dataDirectory + "/" + subDirectory + "/" + file;
}

void DataManager::seedRandomNumbers(unsigned int seed)
{
    srand(seed);
}

int DataManager::randomNumber()
{
	return rand();
}


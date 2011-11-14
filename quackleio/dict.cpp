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

#include <vector>
#include <map>

#include "dict.h"
#include "util.h"

using namespace std;
using namespace Dict;

WordList::SortType WordList::sortType = Playability;

WordList::WordList()
{
}

WordList::~WordList()
{
}

void WordList::setSortBy(SortType _sortType)
{
	sortType = _sortType;
}

bool operator<(const Dict::Word &word1, const Dict::Word &word2)
{
	switch (Dict::WordList::sortType)
	{
	case Dict::WordList::Alphabetical:
		return word1.word < word2.word;

	case Dict::WordList::Playability:
		if (word1.playability != word2.playability)
			return word1.playability > word2.playability;
	
		if (word1.word.length() != word2.word.length())
			return word1.word.length() < word2.word.length();

		// fall through
		
	case Dict::WordList::Probability:
		return word1.probability > word2.probability;
	
	case Dict::WordList::Length:
	case Dict::WordList::LengthLongestFirst:
	{
		bool ret;
		if (word1.word.length() != word2.word.length())
			ret = word1.word.length() < word2.word.length();
		else
			ret = word1.word < word2.word;

		if (Dict::WordList::sortType == Dict::WordList::LengthLongestFirst)
			return !ret;
		return ret;
	}
	}

	return false;
}

ExtensionList Word::extensionsByLength(int length, const ExtensionList &list)
{
	ExtensionList ret;

	for (ExtensionList::const_iterator it = list.begin(); it != list.end(); ++it)
	{
		if ((*it).extensionLetterString.length() == length)
		{
			Extension extension(*it);
			extension.word = QuackleIO::Util::letterStringToQString((*it).extensionLetterString);
			ret.append(extension);
		}
	}

	return ret;
}

ExtensionList Word::getFrontExtensionList() const
{
	return getExtensionList(true);
}

ExtensionList Word::getBackExtensionList() const
{
	return getExtensionList(false);
}

ExtensionList Word::getExtensionList(bool front) const
{
	ExtensionList ret;

	const vector<Quackle::ExtensionWithInfo> *list = front? &frontExtensions : &backExtensions;

	for (vector<Quackle::ExtensionWithInfo>::const_iterator it = list->begin(); it != list->end(); ++it)
	{
		Extension extension(*it);
		extension.word = QuackleIO::Util::letterStringToQString((*it).extensionLetterString);
		ret.append(extension);
	}

	return ret;
}

Extension::Extension(const Quackle::ExtensionWithInfo extensionWithInfo)
{
	playability = extensionWithInfo.playability;
	probability = extensionWithInfo.probability;
	british = extensionWithInfo.british;
}

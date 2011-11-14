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

#ifndef QUACKER_WIDGETFACTORY_H
#define QUACKER_WIDGETFACTORY_H

#include "view.h"

class WidgetFactory
{
public:
	virtual ~WidgetFactory() { };
	virtual View *createBoardDisplay() = 0;
	virtual View *createRackDisplay() = 0;
	virtual View *createBagDisplay() = 0;
};

class TextFactory : public WidgetFactory
{
public:
	virtual ~TextFactory() { };
	virtual View *createBoardDisplay();
	virtual View *createRackDisplay();
	virtual View *createBagDisplay();
};

class GraphicalFactory : public WidgetFactory
{
public:
	virtual ~GraphicalFactory() { };
	virtual View *createBoardDisplay();
	virtual View *createRackDisplay();
	virtual View *createBagDisplay();
};

class BoardSetupFactory : public WidgetFactory
{
public:
	virtual ~BoardSetupFactory() { };
	virtual View *createBoardDisplay();
	virtual View *createRackDisplay();
	virtual View *createBagDisplay();
};

#endif

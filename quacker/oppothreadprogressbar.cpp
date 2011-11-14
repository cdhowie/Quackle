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

#include "geometry.h"
#include "oppothreadprogressbar.h"
#include "oppothread.h"

OppoThreadProgressBar::OppoThreadProgressBar(OppoThread *thread)
	: m_thread(thread)
{
	QHBoxLayout *layout = new QHBoxLayout(this);
	Geometry::setupInnerLayout(layout);

	m_progressBar = new QProgressBar;
	m_progressBar->setRange(0, 100);
	layout->addWidget(m_progressBar);

	m_cancelButton = new QPushButton(tr("Finish Now"));
	connect(m_cancelButton, SIGNAL(clicked()), this, SLOT(cancel()));
	layout->addWidget(m_cancelButton);
}

void OppoThreadProgressBar::setValue(int value)
{
	m_progressBar->setValue(value);
}

void OppoThreadProgressBar::cancel()
{
	m_thread->abort();
}


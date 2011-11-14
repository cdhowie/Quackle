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

#ifndef QUACKER_DASHBOARD_H
#define QUACKER_DASHBOARD_H

#include <QList>

#include <game.h>

#include "view.h"

class QFrame;
class QHBoxLayout;
class QLabel;
class QVBoxLayout;

enum WinnerStatus { Winner = 0, Cowinner, Nonwinner };

class PlayerBrief : public QFrame
{
Q_OBJECT

public:
	PlayerBrief();

	void setCurrentPlayer(bool isCurrent);
	void setWinnerStatus(WinnerStatus isWinner);
	void setPlayer(const Quackle::Player &player);

private:
	QVBoxLayout *m_vlayout;

	bool m_isCurrent;
	WinnerStatus m_winnerStatus;

	QLabel *m_name;
	QLabel *m_score;
};

inline void PlayerBrief::setCurrentPlayer(bool isCurrent)
{
	m_isCurrent = isCurrent;
}

inline void PlayerBrief::setWinnerStatus(WinnerStatus isWinner)
{
	m_winnerStatus = isWinner;
}

class Dashboard : public HistoryView
{
Q_OBJECT

public:
	Dashboard(QWidget *parent = 0);
	virtual ~Dashboard();

public slots:
	virtual void historyChanged(const Quackle::History &history);

protected:
	QList<PlayerBrief *> m_briefs;

	QHBoxLayout *m_hlayout;
};

#endif

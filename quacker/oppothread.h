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

#ifndef QUACKER_OPPOTHREAD_H
#define QUACKER_OPPOTHREAD_H

#include <QMutex>
#include <QThread>

#include <computerplayer.h>
#include <game.h>

class QuackerDispatch : public QObject, public Quackle::ComputerDispatch
{
Q_OBJECT

public:
	QuackerDispatch(QObject *parent = 0);
	virtual ~QuackerDispatch();

	virtual bool shouldAbort() { return m_shouldAbort; }
	virtual void setShouldAbort(bool shouldAbort) { m_shouldAbort = shouldAbort; }

	virtual void signalFractionDone(double fraction);

signals:
	void fractionDone(double fractionDone);

private:
	bool m_shouldAbort;
};

class OppoThread : public QThread
{
Q_OBJECT

public:
	OppoThread(QObject *parent = 0);
	~OppoThread();

	void setPosition(const Quackle::GamePosition &position);
	const Quackle::GamePosition &position() const;

	void setPlayer(Quackle::ComputerPlayer *player);
	Quackle::ComputerPlayer *player() const;

	// starts the thread
	void findBestMoves(int nmoves);

	void abort();

	const Quackle::MoveList &moves() const;

protected:
	void run();

signals:
	void fractionDone(double fraction, OppoThread *thread);

private slots:
	void signalFractionDone(double fractionDone);

private:
	Quackle::GamePosition m_position;
	Quackle::MoveList m_moves;
	int m_nmoves;
	Quackle::ComputerPlayer *m_player;

	QuackerDispatch *m_dispatch;

	QMutex m_mutex;
};

inline const Quackle::GamePosition &OppoThread::position() const
{
	return m_position;
}

inline Quackle::ComputerPlayer *OppoThread::player() const
{
	return m_player;
}

#endif

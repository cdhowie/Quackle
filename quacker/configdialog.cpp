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

#include "configpages.h"
#include "configdialog.h"

ConfigPage::ConfigPage(QWidget *parent)
	: QWidget(parent)
{
}

ConfigDialog::ConfigDialog()
{
	m_contentsWidget = new QListWidget;
	m_contentsWidget->setMovement(QListView::Static);

	m_pagesWidget = new QStackedWidget;

	m_configPages.push_back(new InterfacePage);
	//m_configPages.push_back(new LetterboxPage);

	for (QList<ConfigPage *>::iterator it = m_configPages.begin(); it != m_configPages.end(); ++it)
	{
		m_pagesWidget->addWidget(*it);
		(*it)->readConfig();

		QListWidgetItem *button = new QListWidgetItem((*it)->pageTitle(), m_contentsWidget);
		button->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
	}

	connect(m_contentsWidget, SIGNAL(currentItemChanged(QListWidgetItem *, QListWidgetItem *)), this, SLOT(changePage(QListWidgetItem *, QListWidgetItem*)));

	QPushButton *applyButton = new QPushButton(tr("&Apply"));
	QPushButton *okButton = new QPushButton(tr("&OK"));
	QPushButton *cancelButton = new QPushButton(tr("&Cancel"));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
	connect(okButton, SIGNAL(clicked()), this, SLOT(submit()));
	connect(applyButton, SIGNAL(clicked()), this, SLOT(apply()));

	m_contentsWidget->setCurrentRow(0);

	QHBoxLayout *horizontalLayout = new QHBoxLayout;
	horizontalLayout->addWidget(m_contentsWidget);
	horizontalLayout->addWidget(m_pagesWidget, 1);
	horizontalLayout->setStretchFactor(m_pagesWidget, 2);

	QHBoxLayout *buttonsLayout = new QHBoxLayout;
	buttonsLayout->addStretch(1);
	buttonsLayout->addWidget(okButton);
	buttonsLayout->addWidget(applyButton);
	buttonsLayout->addWidget(cancelButton);

	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addLayout(horizontalLayout);
	mainLayout->addStretch(1);
	mainLayout->addSpacing(12);
	mainLayout->addLayout(buttonsLayout);
	setLayout(mainLayout);

	setWindowTitle(tr("Configure - Quackle"));
}

void ConfigDialog::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
	if (!current)
		current = previous;

	m_pagesWidget->setCurrentIndex(m_contentsWidget->row(current));
}

void ConfigDialog::apply()
{
	for (QList<ConfigPage *>::iterator it = m_configPages.begin(); it != m_configPages.end(); ++it)
	{
		(*it)->writeConfig();
	}

	emit refreshViews();
}

void ConfigDialog::submit()
{
	apply();
	close();
}


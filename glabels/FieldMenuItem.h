/*  FieldMenuItem.h
 *
 *  Copyright (C) 2014  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef glabels_FieldMenuItem_h
#define glabels_FieldMenuItem_h

#include <QAction>
#include <QString>


namespace glabels
{

	///
	/// Field Menu Item
	///
	class FieldMenuItem : public QAction
	{
		Q_OBJECT

		/////////////////////////////////
		// Life Cycle
		/////////////////////////////////
	public:
		FieldMenuItem( const QString& key, QObject* parent = 0 );


		/////////////////////////////////
		// Signals
		/////////////////////////////////
	signals:
		void activated( const QString& key );


		/////////////////////////////////
		// Properties
		/////////////////////////////////
	public:
		QString key() const;


		/////////////////////////////////
		// Slots
		/////////////////////////////////
	private slots:
		void onTriggered();


		/////////////////////////////////
		// Private Data
		/////////////////////////////////
	private:
		const QString mKey;

	};


}

#endif // glabels_FieldMenuItem_h

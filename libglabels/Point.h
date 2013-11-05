/*  Point.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
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

#ifndef libglabels_Point_h
#define libglabels_Point_h


namespace libglabels
{

	class Point
	{
	public:
		Point() : mX(0), mY(0)
		{
		}

		Point( double x, double y ) : mX(x), mY(y)
		{
		}

		inline double x() const { return mX; }
		inline double y() const { return mY; }

		bool operator<( const Point &other ) const;


	private:
		double  mX;
		double  mY;
	};

}

#endif // libglabels_Point_h

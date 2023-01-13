#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &toCopy);
		~Point();
		Point	&operator=(Point const &toAssign);

		Fixed	getX() const;
		Fixed	getY() const;

	private:
		Fixed const _x;
		Fixed const _y;
};

#endif
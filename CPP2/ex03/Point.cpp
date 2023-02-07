#include "Point.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Point::Point(): _x(0), _y(0)
{
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
}

Point::Point(Point const &toCopy): _x(toCopy._x), _y(toCopy._y)
{
}

Point::~Point()
{
}

Point	&Point::operator=(Point const &toAssign)
{
	std::cout << "Can't change coordonates of an existing Point. Crete a new one." << std::endl;
	if (this != &toAssign)
		;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

Fixed	Point::getX() const
{
	return (_x);
}

Fixed	Point::getY() const
{
	return (_y);
}

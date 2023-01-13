#include "Point.hpp"

static Point	_get_middle(Point const a, Point const b)
{
	Point middle(((a.getX() + b.getX()) / 2), ((a.getY() + b.getY()) / 2));

	return (middle);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	

}
#include "Point.hpp"

static float	_get_sign(Point const a, Point const b, Point const point)
{
	float result;

	result = (point.getX().toFloat() - b.getX().toFloat()) *
			(a.getY().toFloat() - b.getY().toFloat());
	result -= (a.getX().toFloat() - b.getX().toFloat()) *
			(point.getY().toFloat() - b.getY().toFloat());
	return (result);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	ab, bc, ca;

	ab = _get_sign(a, b, point);
	bc = _get_sign(b, c, point);
	ca = _get_sign(c, a, point);

	if (ab == 0 || bc == 0 || ca == 0)
		return (false);
	return ((ab < 0 && bc < 0 && ca < 0) ||  (ab > 0 && bc > 0 && ca > 0));
}

#include <iostream>
#include <cstdlib>
#include "Point.hpp"

int	main()
{
	Point	point;

	std::cout << "X = " << point.getX() << std::endl;
	std::cout << "Y = " << point.getY() << std::endl;
	return (EXIT_SUCCESS);
}

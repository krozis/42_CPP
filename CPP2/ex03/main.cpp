#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Point.hpp"

#define X "\e[0m"
#define BOLD "\e[1m"
#define GREEN "\e[32m"
#define RED "\e[91m"
#define ARG_ERR std::cout << BOLD << "Usage: ./a.out [X] [Y]" << X << std::endl; return (EXIT_FAILURE);

#define A 345, 23
#define B 238, 503
#define C 506, 522

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(int ac,char **av)
{
	Point const	a(A);
	Point const	b(B);
	Point const	c(C);
	
	if (ac != 3)
		{ARG_ERR};
	Point const p(std::strtod(av[1], 0), std::strtod(av[2], 0));

	if (bsp(a, b, c, p) == true)
		std::cout << GREEN << "Point (" << p.getX() << ", " << p.getY() << ") is in the triangle!" << X << std::endl;
	else
		std::cout << RED << "Point (" << p.getX() << ", " << p.getY() << ") is NOT in the triangle!" << X << std::endl;
	return (EXIT_SUCCESS);
}

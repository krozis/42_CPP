#include <iostream>
#include <cstdlib>
# include "Figure.hpp"
# include "Triangle.hpp"

int	main(void)
{
	std::cout << "TRIANGLE" << std::endl;

	std::cout << RED << "----------CONSTRUCT--------" << X << std::endl;
	Triangle	a;
	Triangle	b(13,16);
	Triangle	c(b);
	Triangle	d = b;
	Figure		*fig = new Triangle(5, 7);
	
	std::cout << "----- a -----" << std::endl;
	a.display();
	a.perimeter();
	a.area();
	std::cout << "----- b -----" << std::endl;
	b.display();
	b.perimeter();
	b.area();
	std::cout << "----- c -----" << std::endl;
	c.display();
	c.perimeter();
	c.area();
	std::cout << "----- d -----" << std::endl;
	d.display();
	d.perimeter();
	d.area();
	std::cout << "----- fig -----" << std::endl;
	fig->display();
	fig->perimeter();
	fig->area();

	std::cout << RED << "----------DESTRUCTION--------" << X << std::endl;
	delete fig;
	return (EXIT_SUCCESS);
}

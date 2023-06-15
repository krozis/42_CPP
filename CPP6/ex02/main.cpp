#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Base.hpp"

#define X "\e[0m"
#define COLOR_A "\e[94m"
#define COLOR_B "\e[31m"
#define COLOR_C "\e[33m"
#define MSG(type, msg) std::cout << type << msg << X << std::endl
#define BL std::cout << std::endl;

Base	*generate()
{
	std::cout << "Generating: ";
	switch (rand() % 3)
	{
		case 1:
			MSG(COLOR_A, "A");
			return (new A);
		case 2:
			MSG(COLOR_B, "B");
			return (new B);	
		default:
			MSG(COLOR_C, "C");
			return (new C);				
	}
}

void	identify(Base *p)
{
	std::cout << "Object detection from pointer: ";
	if (dynamic_cast<A *>(p))
		MSG(COLOR_A, "A");
	if (dynamic_cast<B *>(p))
		MSG(COLOR_B, "B");
	if (dynamic_cast<C *>(p))
		MSG(COLOR_C, "C");
}

void	identify(Base &p)
{
	std::cout << "Object detection form reference: ";
	try
	{
		A &x = dynamic_cast<A &>(p);
		(void)x;
		MSG(COLOR_A, "A");
	}
	catch(const std::exception& e) {}
	try
	{
		B &x = dynamic_cast<B &>(p);
		(void)x;
		MSG(COLOR_B, "B");
	}
	catch(const std::exception& e) {}
	try
	{
		C &x = dynamic_cast<C &>(p);
		(void)x;
		MSG(COLOR_C, "C");
	}
	catch(const std::exception& e) {}
}

int	main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		if (i)
			BL;
		Base	*b = generate();
		identify(b);
		identify(*b);
		delete (b);
	}
	return (EXIT_SUCCESS);
}
#include <iostream>
#include <cstdlib>
#include "ScalarConverter.hpp"

#define USAGE std::cerr << "\e[31mUsage: ./convert <value>\e[0m" << std::endl; return (EXIT_FAILURE);

int	main(int ac, char **av)
{
	if (ac != 2)
		{USAGE;}

	ScalarConverter::convert(av[1]);

	return (EXIT_SUCCESS);
}

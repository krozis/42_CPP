#include "RPN.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Error" << std::endl;
	else
		RPN	rpn(av[1]);	
	return (EXIT_SUCCESS);
}
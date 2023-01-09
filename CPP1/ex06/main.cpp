#include <cstdlib>
#include <iostream>
#include "Harl.hpp"

static int	errMsg(std::string msg)
{
	std::cout << msg << std::endl;
	return (EXIT_FAILURE); 
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (errMsg("Usage: ./harl <level>"));
	
	Harl	harl;

	harl.complain(av[1]);
	return (EXIT_SUCCESS);
}

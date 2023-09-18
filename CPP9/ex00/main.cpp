#include <cstdlib>
#include "BitcoinExchange.hpp"

#define DATABASE "data.csv"

int	main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			BitcoinExchange	btc("", DATABASE);
		else
			BitcoinExchange btc(av[1], DATABASE);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

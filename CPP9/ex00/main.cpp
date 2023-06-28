#include <cstdlib>
#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			BitcoinExchange	btc("", "./data.csv");
		else
			BitcoinExchange btc(av[1], "./data.csv");
		return (EXIT_SUCCESS);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
}

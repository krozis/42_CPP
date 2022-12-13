#include <iostream>
#include <cstdlib>
#include <cstring>

#define DEFAULT "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int ac, char **av)
{

	if (ac < 2)
		std::cout << DEFAULT;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (size_t j = 0; j < strlen(av[i]); j++)
				std::cout << (char) toupper(av[i][j]);
		}			
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

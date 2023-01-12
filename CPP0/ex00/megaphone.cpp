#include <iostream>
#include <cstdlib>

#define DEFAULT "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << DEFAULT;
	else
	{
		std::string	str;

		for (int i = 1; i < ac; i++)
			str.append(av[i]);
		for (std::string::iterator it = str.begin(); it != str.end(); it++)
			std::cout << (char) toupper(*it);		
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}

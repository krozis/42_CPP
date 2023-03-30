#include <cstdlib>
#include <iostream>
#include <vector>
#include "easyfind.hpp"

#define MSG(msg) std::cout << msg << std::endl;
#define MSG_FULL(value, idx) std::cout << "The int " << value << " is found at the index " << idx << std::endl;
#define USAGE {MSG("Usage: ./easyfind <value>"); return (EXIT_FAILURE);}

void	_fill_simple(std::vector<int> &vec)
{
	for (int i = 0; i < 101; i++)
		vec.push_back(i);
}

void	_fill_double(std::vector<int> &vec)
{
	for (int i = 0; i < 101; i+= 2)
		vec.push_back(i);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		USAGE
	try
	{
		std::vector<int>	vec;
		int					to_find = atoi(av[1]);
		int					idx;

		_fill_simple(vec);
		idx = easyfind(vec, to_find);
		MSG_FULL(to_find, idx);

		vec.clear();

		_fill_double(vec);
		idx = easyfind(vec, to_find);
		MSG_FULL(to_find, idx);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
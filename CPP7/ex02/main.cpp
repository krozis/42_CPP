#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_SIZE 750
#define BL std::cout << std::endl
#define USAGE std::cout << "Usage: ./array <nb>" << std::endl; return (EXIT_FAILURE)
#define MSG_SIZE(name, size) std::cout << name << " is an Array of size " << size << std::endl
#define MSG_VAL(name, idx, value) std::cout << name << "[" << idx << "] = " << value << std::endl

template<typename T>
T const &min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

int main(int ac, char** av)
{
	if (ac != 2)
		{USAGE;}
	try
	{
		unsigned int size = min(MAX_SIZE, abs(atoi(av[1])));
		Array<int> nb(size);

		for (unsigned int i = 0; i < nb.size(); i++)
			nb[i] = i + 1;

		Array<int> copy(nb);
		Array<int> assign = nb;

		MSG_SIZE("1) nb", nb.size());
		MSG_SIZE("2) copy", nb.size());
		MSG_SIZE("3) assign", nb.size());
 		try
		{
			for (unsigned int i = 0; i <= size; i++)
			{
				BL;
				MSG_VAL("1) nb", i, nb[i]);
				MSG_VAL("2) copy", i, nb[i]);
				MSG_VAL("3) assign", i, nb[i]);
			}
		}
			catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (EXIT_SUCCESS);
}
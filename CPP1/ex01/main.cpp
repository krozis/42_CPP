#include "Zombie.hpp"
#include <cstdlib>
#include <limits>

#ifdef _WIN32
# define CLEAR "cls"
#elif _WIN64
# define CLEAR "cls"
#elif __CYGWIN__
# define CLEAR "cls"
#else
# define CLEAR "clear"
#endif

#define X "\e[0m"
#define BIG "\e[1m \e[4m"
#define RED "\e[31m"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int	nb = 0;
	system(CLEAR);
	std::cout << BIG << "HOW MANY ZOMBIES\n" << X << std::endl;
	while (nb <= 0 || nb > 100)
	{
		std::cout << "How many zombies in the hords? (min 1, max 100)" << std::endl;
		std::cin >> nb;
		if (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (nb > 0 && nb < 101)
		{
			system(CLEAR);
			std::cout << BIG RED << nb << " zombies will be created." << X << std::endl;
			break ;
		}
	}

	std::cout << BIG << "\nCREATION OF ZOMBIES\n" << X << std::endl;
	Zombie	*zob = zombieHorde(nb, "Humphrey");

	if (!zob)
		return (EXIT_FAILURE);
	std::cout << BIG << "\nGROWLINGS\n" << X << std::endl;
	for (int i = 0; i < nb; i++)
		zob[i].announce();
	std::cout << BIG << "\nDESTRUCTION OF ZOMBIES\n" << X << std::endl;
	delete [] zob;
	return (EXIT_SUCCESS);
}

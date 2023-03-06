#include "Zombie.hpp"
#include <cstdlib>
#include <limits>

# define X "\e[0m"
# define BIG "\e[1m \e[4m"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int	nb = 0;
	system("clear");
	std::cout << BIG << "\nHOW MANY ZOMBIES\n" << X << std::endl;
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
			system("clear");
			std::cout << nb << " zombies will be created." << std::endl;
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

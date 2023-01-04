#include "Zombie.hpp"
#include <cstdlib>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int	nb = 0;

	std::cout << "How many zombies in the hords? (min 1)" << std::endl;
	std::cin >> nb;
	std::cout << nb << " zombies will be created." << std::endl;

	Zombie	*zob = zombieHorde(nb, "Zob");

	for (int i = 0; i < nb; i++)
		zob[i].announce();
	delete [] zob;
	return (EXIT_SUCCESS);
}

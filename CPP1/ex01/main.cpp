#include "Zombie.hpp"
#include <cstdlib>
#include <climits>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int	nb = 0;

	while (nb <= 0)
	{
		std::cout << "How many zombies in the hords? (min 1)" << std::endl;
		if (std::cin >> nb && nb > 0)
			std::cout << nb << " zombies will be created." << std::endl;
		else if (std::cin.good())
		{
			std::cout << "Minimum 1 zombie" << std::endl;
			nb = 0;
		}
		else
			break ;
	}
	Zombie	*zob = zombieHorde(nb, "Zob");

	if (!zob)
		return (EXIT_FAILURE);
	for (int i = 0; i < nb; i++)
		zob[i].announce();
	delete [] zob;
	return (EXIT_SUCCESS);
}

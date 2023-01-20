#include "Zombie.hpp"
#include <cstdlib>

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie	*zob = newZombie("Zob");

	if (zob)
		zob->announce();
	randomChump("the Bourrinator");
	delete zob;
	return (EXIT_SUCCESS);
}

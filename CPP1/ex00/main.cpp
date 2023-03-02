#include "Zombie.hpp"
#include <cstdlib>

# define X "\e[0m"
# define BIG "\e[1m \e[4m"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	std::cout << BIG << "\n------ Using object zombie --------\n" << X << std::endl;
	Zombie	*zob = newZombie("Grûpt");
	if (zob)
		zob->announce();
	delete zob;

	std::cout << BIG << "\n------ Using RandomChump --------\n" << X << std::endl;
	randomChump("Sir Edward II");

	return (EXIT_SUCCESS);
}

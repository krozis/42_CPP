#include "ClapTrap.hpp"
#include <cstdlib>

int	main(void)
{
	ClapTrap	clap("Zero");
	ClapTrap	clop("Maya");
	std::string	enemy("Handsome Jack");

	std::cout << "\n------ ATTACKING -------" << std::endl;
	for (int i = 1; i <= 11; i++)
		clap.attack(enemy);
	std::cout << "\n------ TAKING DMG -------" << std::endl;
	for (int i = 1; i <= 10; i++)
		clap.takeDamage(i);
	std::cout << "\n------ REPEARING -------" << std::endl;
	for (int i = 1; i <= 10; i++)
	{
		clop.takeDamage(i);
		if (i % 2)
			clop.beRepaired(i - 1);
	}
	return (EXIT_SUCCESS);
}
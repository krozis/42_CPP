#include "Claptrap.hpp"
#include <cstdlib>

int	main(void)
{
	Claptrap	clap("Zero");
	Claptrap	clop("Maya");
	std::string	enemy("Handsome Jack");

	std::cout << "------ ATTACKING -------" << std::endl;
	for (int i = 1; i <= 10; i++)
		clap.attack(enemy);
	std::cout << "------ TAKING DMG -------" << std::endl;
	for (int i = 1; i <= 10; i++)
		clap.takeDamage(i);
	std::cout << "------ REPEARING -------" << std::endl;
	for (int i = 1; i <= 10; i++)
	{
		clop.takeDamage(i);
		if (i % 2)
			clop.beRepaired(i - 1);
	}
	return (EXIT_SUCCESS);
}
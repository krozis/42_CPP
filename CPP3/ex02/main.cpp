#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <cstdlib>

int	main(void)
{
	std::string	enemy("Handsome Jack");
	ClapTrap	clap("Zero");
	ScavTrap	gun("Sanglier of Cornouailles");
	ScavTrap	tank("Jojo the asticot");
	FragTrap	hit("Kiki the kiwi");
	FragTrap	mountain("Public Ray");

	std::cout << "\n------ CLAPTRAP ATTACKING -------" << std::endl;
	for (int i = 1; i <= 15; i++)
		clap.attack(enemy);
	std::cout << "\n------CLAPTRAP REPEARING & TAKING DMG -------" << std::endl;
	for (int i = 1; i <= 10; i++)
	{
		clap.takeDamage(i);
		if (i % 2)
			clap.beRepaired(i - 1);
	}
	std::cout << "\n------ SCAVTRAP GATE KEEPER -------" << std::endl;
		tank.guardGate();
	std::cout << "\n------ SCAVTRAP ATTACKING -------" << std::endl;
	for (int i = 1; i <= 53; i++)
		gun.attack(enemy);
	std::cout << "\n------ SCAVTRAP REPEARING -------" << std::endl;
	for (int i = 1; i <= 25; i++)
	{
		tank.takeDamage(i);
		if (i % 2)
			tank.beRepaired(i - 1);
	}
	std::cout << "\n------ FRAGTRAP HIGH FIVE -------" << std::endl;
		hit.highFiveGuys();
	std::cout << "\n------ FRAGTRAP ATTACKING -------" << std::endl;
	for (int i = 1; i <= 103; i++)
		hit.attack(enemy);
	std::cout << "\n------ FRAGTRAP REPEARING -------" << std::endl;
	for (int i = 1; i <= 25; i++)
	{
		mountain.takeDamage(i);
		if (i % 2)
			mountain.beRepaired(i - 1);
	}
	return (EXIT_SUCCESS);
}
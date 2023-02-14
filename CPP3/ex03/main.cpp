#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <cstdlib>

#define DEFAULT "\e[39m"
#define BLACK "\e[30m"
#define GREY "\e[90m"
#define RED "\e[31m"
#define CYAN "\e[36m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[94m"
#define MAGENTA "\e[35m"

int	main(void)
{
	DiamondTrap	toto("Woll_Smoth");
	DiamondTrap titi;
	std::string	tutu_the_target("Silvester Staline");

	std::cout << RED << std::endl << "--- Special abilities ---" << std::endl << std::endl;

	toto.guardGate();
	toto.highFiveGuys();
	toto.whoAmI();

	std::cout << BLUE <<std::endl << "--- Attacks ---" << std::endl << std::endl;

	for (int i = 1; i < 102; i++)
		toto.attack(tutu_the_target);

	std::cout << GREEN <<std::endl << "--- Damages && Repears ---" << std::endl << std::endl;
	for (int i = 1; i < 52; i++)
	{
		titi.takeDamage(i);
		titi.beRepaired(i - 1);
	}
	std::cout << YELLOW;
	toto.beRepaired(20);

	std::cout << DEFAULT << std::endl;

	return (EXIT_SUCCESS);
}
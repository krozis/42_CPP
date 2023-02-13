#include "ClapTrap.hpp"
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
	ClapTrap	tata;
	ClapTrap	toto("Moxxy");
	ClapTrap	titi("Z3r0");
	std::string	tutu_the_target("Handsome Jack");


	std::cout << BLUE <<std::endl << "--- Attacks ---" << std::endl << std::endl;
	for (int i = 1; i < 12; i++)
		toto.attack(tutu_the_target);

	std::cout << GREEN <<std::endl << "--- Damages && Repears ---" << std::endl << std::endl;
	for (int i = 1; i < 8; i++)
	{
		titi.takeDamage(i);
		titi.beRepaired(i - 1);
	}
	std::cout << YELLOW;
	toto.beRepaired(20);

	std::cout << DEFAULT << std::endl;
	return (EXIT_SUCCESS);
}
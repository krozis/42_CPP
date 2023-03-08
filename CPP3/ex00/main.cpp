#include "ClapTrap.hpp"
#include <cstdlib>

#define X "\e[0m"
#define BIG "\e[1m \e[4m"

int	main(void)
{
	std::cout << BIG << "\n--- Creators ---\n" << X << std::endl;
	ClapTrap	tata;
	ClapTrap	toto("Moxxy");
	ClapTrap	titi("Z3r0");
	ClapTrap	*truc = new ClapTrap(titi);
	std::string	tutu_the_target("Handsome Jack");


	std::cout << BIG << "\n--- Attacks ---\n" << X << std::endl;
	for (int i = 1; i < 12; i++)
		toto.attack(tutu_the_target);

	std::cout << BIG << "\n--- Damages && Repears ---\n" << X << std::endl;
	for (int i = 1; i < 8; i++)
	{
		titi.takeDamage(i);
		titi.beRepaired(i - 1);
	}
	toto.beRepaired(20);
	truc->attack(tutu_the_target);
	std::cout << BIG << "\n--- Destructors ---\n" << X << std::endl;
	delete(truc);
	return (EXIT_SUCCESS);
}

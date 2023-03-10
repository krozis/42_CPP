#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

#define X "\e[0m"
#define BIG "\e[1m \e[4m"
#define MSG(msg) std::cout << BIG << msg << X << std::endl
#define TARGET "Marx_Lavoine"

int	main(void)
{
	MSG("\n----- CREATION -----\n");

	ScavTrap	tata;
	ScavTrap	toto("Jojo_the_asticot");
	ClapTrap	*titi = new ScavTrap("Sanglier_of_Cornouailles");

	MSG("\n--- Special abilities ---\n");

	tata.guardGate();
	toto.guardGate();

	MSG("\n----- Attacks -----\n");

	for (int i = 1; i < 52; i++)
		toto.attack(TARGET);

	MSG("\n--- Damages && Repears ---\n");

	toto.beRepaired(20);
	for (int i = 1; i < 52; i+= 10)
	{
		titi->takeDamage(i);
		titi->beRepaired(i / 5);
	}

	MSG("\n---- DESTRUCTORS ----\n");
	delete (titi);
	return (EXIT_SUCCESS);
}

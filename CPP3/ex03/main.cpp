#include "DiamondTrap.hpp"
#include <cstdlib>

#define X "\e[0m"
#define BIG "\e[1m \e[4m"
#define MSG(msg) std::cout << BIG << msg << X << std::endl
#define TARGET "Desmond_Tortutu"

int	main(void)
{
	MSG("\n----- CREATION -----\n");

	DiamondTrap copy;
	DiamondTrap tata;
	DiamondTrap	toto("Marcel_Pignol");
	ClapTrap	*titi = new DiamondTrap("Robert_Spierre");

	MSG("\n--- Special abilities ---\n");

	tata.guardGate();
	tata.highFiveGuys();
	tata.whoAmI();

	toto.guardGate();
	toto.highFiveGuys();
	toto.whoAmI();

	MSG("\n----- Attacks -----\n");

	for (int i = 1; i < 10; i++)
		toto.attack(TARGET);

	MSG("\n--- Damages && Repears ---\n");

	for (int i = 1; i < 52; i+= 10)
	{
		titi->takeDamage(i);
		titi->beRepaired(i / 5);
	}

	MSG("\n-- Assignement Operator --\n");
	copy.whoAmI();
	copy = toto;
	copy.whoAmI();

	MSG("\n---- DESTRUCTORS ----\n");
	delete (titi);
	return (EXIT_SUCCESS);
}
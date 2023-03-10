#include "ClapTrap.hpp"
#include <cstdlib>

#define X "\e[0m"
#define BIG "\e[1m \e[4m"
#define MSG(msg) std::cout << BIG << msg << X << std::endl;
#define TARGET "Handsome Jack"
int	main(void)
{
	MSG("\n--- Creators ---\n");

	ClapTrap	tata;
	ClapTrap	toto("Moxxy");
	ClapTrap	titi("Z3r0");
	ClapTrap	*truc = new ClapTrap(titi);

	MSG("\n--- Attacks ---\n");

	for (int i = 1; i < 12; i++)
		toto.attack(TARGET);
	truc->attack(TARGET);
	tata.attack(TARGET);
	
	MSG("\n--- Damages && Repears ---\n");

	toto.beRepaired(20);
	for (int i = 1; i < 8; i++)
	{
		titi.takeDamage(i);
		titi.beRepaired(i - 1);
	}

	MSG("\n-- Assignement Operator --\n");
	tata.beRepaired(10);
	tata = toto;
	tata.beRepaired(10);

	MSG("\n--- Destructors ---\n");
	delete(truc);
	return (EXIT_SUCCESS);
}

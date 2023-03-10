#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <cstdlib>

#define X "\e[0m"
#define BIG "\e[1m \e[4m"
#define MSG(msg) std::cout << BIG << msg << X << std::endl
#define TARGET "John Lenine"

int	main(void)
{
	MSG("\n----- CREATION -----\n");

	FragTrap	tata;
	FragTrap	toto("Sylvester Staline");
	ClapTrap	*titi = new FragTrap("Public Ray");

	MSG("\n--- Special abilities ---\n");
	
	tata.highFiveGuys();
	toto.highFiveGuys();

	MSG("\n----- Attacks -----\n");

	for (int i = 1; i < 10; i++)
		toto.attack(TARGET);

	MSG("\n--- Damages && Repears ---\n");

	for (int i = 1; i < 52; i+= 10)
	{
		titi->takeDamage(i);
		titi->beRepaired(i / 5);
	}

	MSG("\n---- DESTRUCTORS ----\n");
	delete (titi);
	return (EXIT_SUCCESS);
}
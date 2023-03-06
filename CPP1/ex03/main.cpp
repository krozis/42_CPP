#include <cstdlib>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#define X "\e[0m"
#define BOLD "\e[1m"
#define UNDERLINED "\e[4m"
#define BIG BOLD UNDERLINED

int main()
{
	std::cout << BIG << "\n----- CREATION -----\n" << X << std::endl;
	std::cout << UNDERLINED << "Weapons\n" << X << std::endl;
	Weapon gun = Weapon("Watergun");
	Weapon ball = Weapon("Pokeball");

	std::cout << UNDERLINED << "\nHumans\n" << X << std::endl;
	HumanA bob("Bob", gun);
	HumanB jim("Jim");

	std::cout << BIG << "\n-- ATTACKING AND CHANGING WEAPONS --\n" << X << std::endl;
	bob.attack();
	gun.setType("Watergun MX8000");
	bob.attack();
	jim.attack();
	jim.setWeapon(ball);
	jim.attack();
	ball.setType("Masterball");
	jim.attack();

	
	std::cout << BIG << "\n---- DESTRUCTION ----\n" << X << std::endl;

	return (EXIT_SUCCESS);
}

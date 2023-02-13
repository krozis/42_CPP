#include "Warrior.hpp"

Warrior::Warrior(std::string name): Dude(name)
{
	std::cout << name << ", warrior, created" << std::endl;
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Warrior::hit_hard(Dude &target) const
{
	std::cout << "Warrior" << " hits very hard!" << std::endl;
	target.takeDmg(20);
}

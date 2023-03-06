#include "HumanB.hpp"
#include "Weapon.hpp"

#define X "\e[0m"
#define COLOR  "\e[38;5;162m"
#define BOLD "\e[1m"
#define ITALIC "\e[3m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << COLOR << "Creation of an Human type B named " << BOLD << _name << std::endl;
	std::cout << _name << X << COLOR << " has no weapon yet" << X << std::endl;
}

HumanB::~HumanB()
{
	std::cout << COLOR << "Destruction of the Human type B named " << BOLD << _name << X << std::endl;
}

/********************************
 *			PUBLIC				*
 ********************************/

void	HumanB::attack() const
{
	if (_weapon)
		std::cout << BOLD COLOR << _name << X COLOR ITALIC << " attacked with their " << BOLD << _weapon->getType() << X << std::endl;
	else
		std::cout << BOLD COLOR << _name << X COLOR ITALIC << " wanted to attack but has no weapon" << X << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	std::cout << BOLD COLOR << _name << X COLOR << " is now using a " << BOLD << weapon << X << std::endl;
	_weapon = &weapon;
}

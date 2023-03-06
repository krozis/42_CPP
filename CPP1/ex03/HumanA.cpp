#include "HumanA.hpp"
#include "Weapon.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;45m"
#define BOLD "\e[1m"
#define ITALIC "\e[3m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << COLOR << "Creation of an Human type A named " << BOLD << _name << std::endl;
	std::cout << _name << X COLOR << " has a " << BOLD << _weapon << X << std::endl; 
}

HumanA::~HumanA()
{
	std::cout << COLOR << "Destruction of the Human type A named " << BOLD << _name << X << std::endl;
}

/********************************
 *			PUBLIC				*
 ********************************/

void	HumanA::attack() const
{
	std::cout << BOLD COLOR << _name << X COLOR ITALIC << " attacks with their " << BOLD << _weapon << X << std::endl;
}

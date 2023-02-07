#include "FragTrap.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hp = 100;
	_mp = 100;
	_dmg = 30;
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << "  has been destroyed" << std::endl;
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	FragTrap::highFiveGuys()
{
	std::cout << _name << " wants you to do a high five with it!" << std::endl;
}
#include "FragTrap.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

FragTrap::FragTrap()
{
	_name = "FR4G-TP";
	_hp = 100;
	_mp = 100;
	_dmg = 30;
	std::cout << "Default constructor for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	_hp = 100;
	_mp = 100;
	_dmg = 30;
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &toCopy)
{
	*this = toCopy;
}

FragTrap	&FragTrap::operator=(FragTrap const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
		std::cout << "FragTrap Assignement operator called" << std::endl;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	FragTrap::highFiveGuys()
{
	std::cout << _name << " wants you to do a high five with it!" << std::endl;
}
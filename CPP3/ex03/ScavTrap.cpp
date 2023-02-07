#include "ScavTrap.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ScavTrap::ScavTrap()
{
	_name = "SC4V-TP";
	_hp = 100;
	_mp = 100;
	_dmg = 30;
	std::cout << "Default constructor for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hp = 100;
	_mp = 50;
	_dmg = 20;
	std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &toCopy)
{
	*this = toCopy;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
		std::cout << "ScavTrap Assignement operator called" << std::endl;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	ScavTrap::attack(std::string const &target)
{
	if (_mp && _hp)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target 
		<< " causing " << _dmg << "pts of damage!" << std::endl;
		_mp--;
	}
	else if (_hp && !_mp)
		std::cout << "ScavTrap " << _name << " needs energy points to attack!" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " has no HP left, it can't attack!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " has entered in the GATE KEEPER mode!" << std::endl;
}

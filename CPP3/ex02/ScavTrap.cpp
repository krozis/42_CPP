#include "ScavTrap.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

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

/********************************
 *			PUBLIC	 			*
 ********************************/

void	ScavTrap::attack(const std::string& target)
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

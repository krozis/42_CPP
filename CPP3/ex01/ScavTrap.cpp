#include "ScavTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[94m"
#define MSG(msg) std::cout << COLOR << "ScavTrap 🧿 : " << msg << X << std::endl
#define MSG_NAMED(name, msg) std::cout << COLOR << "ScavTrap 🧿 : " << name << msg << X << std::endl
#define MSG_ATK(name, target, dmg) std::cout << COLOR << "ScavTrap 🧿 : " << name << " attacks " << target << " causing " << dmg << "pts of damage!" << X << std::endl

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ScavTrap::ScavTrap()
{
	_name ="SC4V-TP";
	_hp = 100;
	_mp = 100;
	_dmg = 30;
	MSG("Default constructor called");
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hp = 100;
	_mp = 50;
	_dmg = 20;
	MSG_NAMED(_name, " has been created");
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

void	ScavTrap::attack(std::string const&target)
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

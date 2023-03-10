#include "ScavTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[94m"
#define ENDL X << std::endl
#define NAME COLOR << "ScavTrap 🧿 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(name, msg) std::cout << NAME << name << msg << ENDL
#define MSG_ATK(name, target, dmg) std::cout << NAME << name << " attacks " << target << " causing " << dmg << "pts of damage!" << ENDL
#define MSG_HEAL(name, amount, hp) std::cout << NAME << name << " regained " << amount << "HP. It now has " << hp << " HP." << ENDL 
#define MSG_DMG(name, amount, hp) std::cout << NAME << name << " took " << amount << " damages! It now has " << hp << "HP left." << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ScavTrap::ScavTrap(): ClapTrap("SC4V-TP")
{
	MSG("Default constructor called");
	_hp = 100;
	_mp = 50;
	_dmg = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	MSG_NAMED(_name, " has been created");
	_hp = 100;
	_mp = 50;
	_dmg = 20;
}

ScavTrap::~ScavTrap()
{
	MSG_NAMED(_name, " has been destroyed!");
}

ScavTrap::ScavTrap(ScavTrap const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
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
		MSG_ATK(_name, target, _dmg);
		_mp--;
	}
	else if (_hp && !_mp)
		MSG_NAMED(_name, " needs energy points to attack!");
	else
		MSG_NAMED(_name, " has no HP left, it can't attack!");
}

void	ScavTrap::guardGate()
{
	MSG_NAMED(_name, " has entered in the GATE KEEPER mode!");
}

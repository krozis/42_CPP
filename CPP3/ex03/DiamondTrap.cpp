#include "DiamondTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;45m"
#define ENDL X << std::endl
#define NAME COLOR << "DiamondTrap 💎 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(name, msg) std::cout << NAME << name << msg << ENDL
#define MSG_ATK(name, target, dmg) std::cout << NAME << name << " attacks " << target << " causing " << dmg << "pts of damage!" << ENDL
#define MSG_HEAL(name, amount, hp) std::cout << NAME << name << " regained " << amount << "HP. It now has " << hp << " HP." << ENDL 
#define MSG_DMG(name, amount, hp) std::cout << NAME << name << " took " << amount << " damages! It now has " << hp << "HP left." << ENDL
#define MSG_WHO(name, cname) std::cout << NAME << "My name is " << name << " and my ClapTrap name is " << cname << ENDL


/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

DiamondTrap::DiamondTrap(): ClapTrap("D14M0ND-TP_clap_name")
{
	MSG("Default constructor called");
	_name = "D14M0ND-TP";
	_hp = FragTrap::_hp;
	_mp = ScavTrap::_mp;
	_dmg = FragTrap::_dmg;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clap_name")
{
	_name = name;
	_hp = FragTrap::_hp;
	_mp = ScavTrap::_mp;
	_dmg = FragTrap::_dmg;
	MSG_NAMED(_name, " has been created");
}

DiamondTrap::DiamondTrap(DiamondTrap const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	MSG_NAMED(_name, " has been destroyed!");
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
	{
		ClapTrap::_name = toAssign._name + "_clap_name";
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

void	DiamondTrap::whoAmI() const
{
	MSG_WHO(_name, ClapTrap::_name);
}

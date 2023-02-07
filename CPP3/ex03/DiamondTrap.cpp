#include "DiamondTrap.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

DiamondTrap::DiamondTrap()
{
	ClapTrap::_name = "D14M0ND-TP_clap_name";
	_name = "D14M0ND-TP";
	_hp = FragTrap::_hp;
	_mp = ScavTrap::_mp;
	_dmg = FragTrap::_dmg;
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hp = FragTrap::_hp;
	_mp = ScavTrap::_mp;
	_dmg = FragTrap::_dmg;
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &toCopy)
{
	*this = toCopy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for DiamondTrap (" << _name << ") called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
		std::cout << "DiamondTrap Assignement operator called" << std::endl;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	DiamondTrap::whoAmI() const
{
	std::cout << "My name is " << _name << " and my ClapTrap name is "
		<< ClapTrap::_name << std::endl;
}

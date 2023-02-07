#include "ClapTrap.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ClapTrap::ClapTrap()
{
	_name = "CL4P-TP";
	_hp = 10;
	_mp = 10;
	_dmg = 0;
	std::cout << "Default constructor for ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _hp(10), _mp(10), _dmg(0)
{
	std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &toCopy)
{
	_name = toCopy._name;
	_hp = toCopy._hp;
	_mp = toCopy._mp;
	_dmg = toCopy._dmg;
	std::cout << "ClapTrap " << _name << " has been cloned" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed (thanks)" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
		std::cout << "ClapTrap Assignement operator called" << std::endl;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	ClapTrap::attack(std::string const &target)
{
	if (_mp && _hp)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target 
		<< " causing " << _dmg << "pts of damage!" << std::endl;
		_mp--;
	}
	else if (_hp && !_mp)
		std::cout << "ClapTrap " << _name << " has not enough energy points!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no HP left!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is already broken!" << std::endl;
	else
	{
		if (amount >= _hp)
			_hp = 0;
		else
			_hp -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount << " damages!"
		" It now has " << _hp << "HP left." << std::endl;
		if (_hp == 0)
			std::cout << _name << " is broken..!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mp && _hp)
	{
		_hp += amount;
		std::cout << "ClapTrap " << _name << " regained " << amount << "HP. "
		<< "It now has " << _hp << "HP." << std::endl;
		_mp--;
	}
	else if (_hp && !_mp)
		std::cout << "ClapTrap " << _name << " has not enough energy points!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no HP left!" << std::endl;
}

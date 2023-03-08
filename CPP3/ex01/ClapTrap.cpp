#include "ClapTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[90m"
#define MSG(msg) std::cout << COLOR << msg << X << std::endl;
#define MSG_NAMED(name, msg) std::cout << COLOR << "ClapTrap 🤖 " << name << msg << X << std::endl;
#define MSG_ATK(name, target, dmg) std::cout << COLOR << "ClapTrap 🤖 " << name << " attacks " << target << " causing " << dmg << "pts of damage!" << X << std::endl;

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ClapTrap::ClapTrap(): _name("CL4P-TP"), _hp(10), _mp(10), _dmg(0)
{
	MSG("ClapTrap 🤖 : Default constructor called");
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mp(10), _dmg(0)
{
	MSG_NAMED(_name, " has been created");
}

ClapTrap::ClapTrap(ClapTrap const &toCopy)
{
	*this = toCopy;
	MSG_NAMED(_name, " has been cloned");
}

ClapTrap::~ClapTrap()
{
	MSG_NAMED(_name, " has been destroyed");
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &toAssign)
{
	MSG("ClapTrap 🤖 : Assignement operator called")
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

void	ClapTrap::attack(std::string const &target)
{
	if (_mp && _hp)
	{
		MSG_ATK(_name, target, _dmg);
		_mp--;
	}
	else if (_hp && !_mp)
		{MSG_NAMED(_name, " has not enough energy points!");}
	else
		{MSG_NAMED(_name, " has no HP left!");}
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

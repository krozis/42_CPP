#include "ClapTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[90m"
#define ENDL X << std::endl
#define NAME COLOR << "ClapTrap 🤖 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(name, msg) std::cout << NAME << name << msg << ENDL
#define MSG_ATK(name, target, dmg) std::cout << NAME << name << " attacks " << target << " causing " << dmg << "pts of damage!" << ENDL
#define MSG_HEAL(name, amount, hp) std::cout << NAME << name << " regained " << amount << "HP. It now has " << hp << " HP." << ENDL 
#define MSG_DMG(name, amount, hp) std::cout << NAME << name << " took " << amount << " damages! It now has " << hp << "HP left." << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ClapTrap::ClapTrap(): _name("CL4P-TP"), _hp(10), _mp(10), _dmg(0)
{
	MSG("Default constructor called");
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
	MSG("ClapTrap 🤖 : Assignement operator called");
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
		MSG_NAMED(_name, " is already broken!");
	else
	{
		if (amount >= _hp)
			_hp = 0;
		else
			_hp -= amount;
			MSG_DMG(_name, amount, _hp);
		if (_hp == 0)
			MSG_NAMED(_name, " is broken..!");
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mp && _hp)
	{
		_hp += amount;
			MSG_HEAL(_name, amount, _hp);
		_mp--;
	}
	else if (_hp && !_mp)
		MSG_NAMED(_name, " has not enough energy points!");
	else
		MSG_NAMED(_name, " has no HP left!");
}

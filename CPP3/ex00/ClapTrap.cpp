#include "ClapTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[90m"
#define COLOR_BROK "\e[1m \e[91m"
#define COLOR_ATK "\e[38;5;202m"
#define COLOR_HEAL "\e[38;5;45m"
#define COLOR_DMG "\e[33m"
#define MSG(msg) std::cout << COLOR << msg << X << std::endl
#define MSG_NAMED(name, msg) std::cout << COLOR << "ClapTrap " << name << msg << X << std::endl
#define MSG_BROK(name, msg) std::cout << COLOR_BROK << "ClapTrap " << name << msg << X << std::endl
#define MSG_HEAL(name, heal, hp) std::cout << COLOR_HEAL << "ClapTrap " << name << " regained " << amount << "HP. It now has " << hp << " HP." << X << std::endl
#define MSG_ATK(name, target, dmg) std::cout << COLOR_ATK << "ClapTrap " << name << " attacks " << target << " causing " << dmg << " pts of damage!" << X << std::endl
#define MSG_DMG(name, dmg, hp) std::cout << COLOR_DMG << "ClapTrap " << name << " took " << amount << " damages! It now has " << hp << "HP left." << X << std::endl

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

ClapTrap::ClapTrap(): _name("CL4P-TP"), _hp(10), _mp(10), _dmg(0)
{
	MSG("Default constructor for ClapTrap");
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mp(10), _dmg(0)
{
	MSG_NAMED(_name , " has been created");
}

ClapTrap::ClapTrap(ClapTrap const &toCopy): _name(toCopy._name), _hp(toCopy._hp), _mp(toCopy._mp), _dmg(toCopy._dmg)
{
/* 	_name = toCopy._name;
	_hp = toCopy._hp;
	_mp = toCopy._mp;
	_dmg = toCopy._dmg; */
	MSG_NAMED(_name, " has been cloned");
}

ClapTrap::~ClapTrap()
{
	MSG_NAMED(_name, " has been destroyed");
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_hp = toAssign._hp;
		_mp = toAssign._mp;
		_dmg = toAssign._dmg;
		MSG("ClapTrap Assignement operator called");
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
		MSG_NAMED(_name, " has not enough energy points!");
	else
		MSG_NAMED(_name, " has no HP left!");
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		MSG_BROK(_name, " is already broken!");
	else
	{
		if (amount >= _hp)
			_hp = 0;
		else
			_hp -= amount;
		MSG_DMG(_name, amount, _hp);
		if (_hp == 0)
			MSG_BROK(_name, " is broken..!");
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_mp && _hp)
	{
		_hp += amount;
		if (_hp > 10)
			_hp = 10;
		MSG_HEAL(_name, amount, _hp);
		_mp--;
	}
	else if (_hp && !_mp)
		MSG_NAMED(_name, " has not enough energy points!");
	else
		MSG_BROK(_name, " has no HP left!");
}

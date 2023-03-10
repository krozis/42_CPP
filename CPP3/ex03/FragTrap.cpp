#include "FragTrap.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;202m"
#define ENDL X << std::endl
#define NAME COLOR << "FragTrap ✋ : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(name, msg) std::cout << NAME << name << msg << ENDL
#define MSG_ATK(name, target, dmg) std::cout << NAME << name << " attacks " << target << " causing " << dmg << "pts of damage!" << ENDL
#define MSG_HEAL(name, amount, hp) std::cout << NAME << name << " regained " << amount << "HP. It now has " << hp << " HP." << ENDL 
#define MSG_DMG(name, amount, hp) std::cout << NAME << name << " took " << amount << " damages! It now has " << hp << "HP left." << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

FragTrap::FragTrap(): ClapTrap("FR4G-TP")
{
	MSG("Default constructor called");
	_hp = 100;
	_mp = 100;
	_dmg = 30;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	MSG_NAMED(_name, " has been created");
	_hp = 100;
	_mp = 100;
	_dmg = 30;
}

FragTrap::~FragTrap()
{
	MSG_NAMED(_name, " has been destroyed!");
}

FragTrap::FragTrap(FragTrap const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

FragTrap	&FragTrap::operator=(FragTrap const &toAssign)
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

void	FragTrap::highFiveGuys() const
{
	MSG_NAMED(_name, " want to do a HIGH FIVE ✋! Don't disappoint it...");
}
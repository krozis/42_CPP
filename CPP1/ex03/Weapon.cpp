#include "Weapon.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;202m"
#define BOLD "\e[1m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Weapon::Weapon(): _type("bare hands")
{
	std::cout << COLOR << "Default constructor for Weapon called" << X << std::endl;
}

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << COLOR << "Created a Weapon of type " << BOLD << _type << X << std::endl;
}

Weapon::~Weapon()
{
	std::cout << COLOR << "Destructor for Weapon of type " << BOLD << _type << X << std::endl;
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string const	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	std::cout << COLOR << "Changing weapon from " BOLD << _type << X;
	_type = type;
	std::cout << COLOR << " to " << BOLD << _type << X << std::endl;
}

/********************************
 *			OPERATORS			*
 ********************************/

std::ostream	&operator<<(std::ostream &flux, Weapon const &weapon)
{
	flux << weapon.getType();
	return (flux);
}

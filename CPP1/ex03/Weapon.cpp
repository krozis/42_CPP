#include "Weapon.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Weapon::Weapon(): _type("bare hands")
{
}

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon()
{
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
	_type = type;
}

/********************************
 *			OPERATORS			*
 ********************************/

std::ostream	&operator<<(std::ostream &flux, Weapon const &weapon)
{
	flux << weapon.getType();
	return (flux);
}

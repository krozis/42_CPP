#include "AMateria.hpp"

//#include "ICharacter.hpp"

#define COLOR "\e[90m" //GREY
#define X "\e[0m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

AMateria::AMateria()
{
	std::cout << COLOR << "AMateria default constructor called" << X << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << COLOR << "AMateria constructor called for a type " << _type << " Materia" << X << std::endl;
}

AMateria::AMateria(AMateria const &toCopy): _type(toCopy._type)
{
	std::cout << COLOR << "Copy constructor for AMateria called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << COLOR << "AMateria destructor called" << X << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &toAssign)
{
	std::cout << COLOR << "AMateria assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string const	&AMateria::getType() const
{
	return (_type);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
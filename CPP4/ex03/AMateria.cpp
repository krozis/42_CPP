#include "AMateria.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

AMateria::AMateria(): _type("untyped")
{
	std::cout << GREY << "AMateria default constructor called" << X << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	std::cout << GREY << "AMateria constructor called for a type " << _type << " Materia" << X << std::endl;
}

AMateria::AMateria(AMateria const &toCopy): _type(toCopy._type)
{
	std::cout << GREY << "AMateria copy constructor called" << X << std::endl;
}

AMateria::~AMateria()
{
	std::cout << GREY << "AMateria destructor called" << X << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &toAssign)
{	
	std::cout << GREY << "AMateria assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string const &AMateria::getType() const
{
	return (_type);
}

/*
	void	AMateria::use(ICharacter& target)
*/

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

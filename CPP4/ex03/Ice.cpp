#include "Ice.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Ice::Ice(): AMateria("ice")
{
	std::cout << ICEBLUE << "ice Materia created" << X << std::endl;
}

Ice::Ice(Ice const &toCopy): AMateria(toCopy)
{
	std::cout << ICEBLUE << "ice Materia copied" << X << std::endl;
}

Ice::~Ice()
{
	std::cout << ICEBLUE << "ice Materia destroyed" << X << std::endl;
}

Ice	&Ice::operator=(Ice const &toAssign)
{
	std::cout << ICEBLUE << "ice Materia assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

AMateria	*Ice::clone(void) const
{
	std::cout << ICEBLUE << "cloning an ice Materia" << X << std::endl;
	return (new Ice(*this));
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

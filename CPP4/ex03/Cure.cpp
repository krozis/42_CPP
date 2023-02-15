#include "Cure.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cure::Cure(): AMateria("cure")
{
	std::cout << PINK << "cure Materia created" << X << std::endl;
}

Cure::Cure(Cure const &toCopy): AMateria(toCopy)
{
	std::cout << PINK << "cure Materia copied" << X << std::endl;
}

Cure::~Cure()
{
	std::cout << PINK << "cure Materia destroyed" << X << std::endl;
}

Cure	&Cure::operator=(Cure const &toAssign)
{
	std::cout << PINK << "cure Materia assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

AMateria	*Cure::clone(void) const
{
	std::cout << PINK << "cloning an cure Materia" << X << std::endl;
	return (new Cure(*this));
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

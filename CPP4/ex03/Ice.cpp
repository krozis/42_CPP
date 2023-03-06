#include "Ice.hpp"
#include "Character.hpp"

#define ITALIC "\e[3m"
#define COLOR "\e[38;5;45m" //ICEBLUE
#define X "\e[0m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Ice::Ice(): AMateria("ice")
{
	std::cout << COLOR << "ice Materia created" << X << std::endl;
}

Ice::Ice(Ice const &toCopy): AMateria(toCopy)
{
	std::cout << COLOR << "ice Materia copied" << X << std::endl;
}

Ice::~Ice()
{
	std::cout << COLOR << "ice Materia destroyed" << X << std::endl;
}

Ice	&Ice::operator=(Ice const &toAssign)
{
	std::cout << COLOR << "ice Materia assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

AMateria	*Ice::clone(void) const
{
	std::cout << COLOR << "cloning an ice Materia" << X << std::endl;
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target) const
{
	std::cout << ITALIC COLOR << "* shoots an ice bolt at " << target.getName()
	<< " *" << X << std::endl;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
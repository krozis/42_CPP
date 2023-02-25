#include "Cure.hpp"
#include "Character.hpp"

#define ITALIC "\e[3m"
#define COLOR "\e[38;5;162m" //PINK
#define X "\e[0m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cure::Cure(): AMateria("cure")
{
	std::cout << COLOR << "cure Materia created" << X << std::endl;
}

Cure::Cure(Cure const &toCopy): AMateria(toCopy)
{
	std::cout << COLOR << "cure Materia copied" << X << std::endl;
}

Cure::~Cure()
{
	std::cout << COLOR << "cure Materia destroyed" << X << std::endl;
}

Cure	&Cure::operator=(Cure const &toAssign)
{
	std::cout << COLOR << "cure Materia assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

AMateria	*Cure::clone(void) const
{
	std::cout << COLOR << "cloning a cure Materia" << X << std::endl;
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) const
{
	std::cout << ITALIC COLOR << "* heals  " << target.getName()
	<< "'s wounds *" << X << std::endl;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

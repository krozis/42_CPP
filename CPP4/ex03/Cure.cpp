#include "Cure.hpp"
#include "Character.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;162m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Cure 🟣 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(type, msg) std::cout << NAME << msg << type << ENDL
#define MSG_USE(name) std::cout << NAME ITALIC << "* heals " << name << "'s wounds *" ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cure::Cure(): AMateria("cure")
{
	MSG("Default constructor called");
}

Cure::Cure(Cure const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Cure::~Cure()
{
	MSG("Destructor called");
}

Cure	&Cure::operator=(Cure const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		(void)toAssign;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

AMateria	*Cure::clone() const
{
	MSG("cloning...");
	return (new Cure);
}

void	Cure::use(ICharacter &target) const
{
	MSG_USE(target.getName());
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

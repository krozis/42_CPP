#include "Ice.hpp"
#include "Character.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;45m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Ice 🔵 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(type, msg) std::cout << NAME << msg << type << ENDL
#define MSG_USE(name) std::cout << NAME ITALIC << "* shoots an ice bolt at " << name << " *" << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Ice::Ice(): AMateria("ice")
{
	MSG("Default constructor called");
}

Ice::Ice(Ice const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Ice::~Ice()
{
	MSG("Destructor called");
}

Ice	&Ice::operator=(Ice const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

AMateria	*Ice::clone() const
{
	MSG("cloning...");
	return (new Ice);
}

void	Ice::use(ICharacter &target) const
{
	MSG_USE(target.getName());
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

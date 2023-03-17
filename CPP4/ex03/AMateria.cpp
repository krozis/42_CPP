#include "AMateria.hpp"
//#include "ICharacter.hpp"

#define X "\e[0m"
#define COLOR "\e[90m"
#define ENDL X << std::endl
#define NAME COLOR << "AMateria ⚪ : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_NAMED(type, msg) std::cout << NAME << msg << type << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

AMateria::AMateria(): _type("default")
{
	MSG("Default constructor called");
}

AMateria::AMateria(std::string const &type): _type(type)
{
	MSG_NAMED(type, "Constructor called for type ");
}

AMateria::AMateria(AMateria const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

AMateria::~AMateria()
{
	MSG("Destructor called");
}

AMateria	&AMateria::operator=(AMateria const &toAssign)
{
	MSG("Assignement operator called");
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

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

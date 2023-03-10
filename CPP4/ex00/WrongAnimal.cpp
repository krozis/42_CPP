#include "WrongAnimal.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;130m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "WrongAnimal 🐵 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "weird fake animal sound" << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongAnimal::WrongAnimal(): _type("wrong animal")
{
	MSG("Default constructor called");
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy): _type(toCopy._type)
{
	MSG("Copy constructor called");
}

WrongAnimal::~WrongAnimal()
{
	MSG("Destructor called");
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	WrongAnimal::makeSound() const
{
	SOUND;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}


/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
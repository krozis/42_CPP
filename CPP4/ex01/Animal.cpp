#include "Animal.hpp"

#define X "\e[0m"
#define COLOR "\e[90m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Animal 🐾 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "you hear a random animal sound, far away..." << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Animal::Animal(): _type("animal")
{
	MSG("Default constructor called");
}

Animal::Animal(Animal const &toCopy): _type(toCopy._type)
{
	MSG("Copy constructor called");
}

Animal::~Animal()
{
	MSG("Destructor called");
}


Animal	&Animal::operator=(Animal const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Animal::makeSound() const
{
	SOUND;
}

std::string	Animal::getType() const
{
	return (_type);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
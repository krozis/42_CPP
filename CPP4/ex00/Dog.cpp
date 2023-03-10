#include "Animal.hpp"
#include "Dog.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;202m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Dog 🐕 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "wooof woof woof! Woof! ( #BARFATTACKF )" << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Dog::Dog()
{
	MSG("Default constructor called");
	_type = "dog";
}

Dog::Dog(Dog const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Dog::~Dog()
{
	MSG("Destructor called");
}


Dog	&Dog::operator=(Dog const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Dog::makeSound() const
{
	SOUND;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
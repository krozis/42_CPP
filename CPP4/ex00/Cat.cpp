#include "Animal.hpp"
#include "Cat.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;99m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Cat 🐈 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "meeeeow meow... meow? ( #PURRKWAAA??? )" << ENDL


/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cat::Cat()
{
	MSG("Default constructor called");
	_type = "cat";
}

Cat::Cat(Cat const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Cat::~Cat()
{
	MSG("Destructor called");
}


Cat	&Cat::operator=(Cat const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Cat::makeSound() const
{
	SOUND;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;162m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "WrongCat 🦦 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "blup bip blop! ( #ThisIsSoWrong )" << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongCat::WrongCat()
{
	MSG("Default constructor called");
	_type = "wrong cat";
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	MSG("Copy constructor called");
	_type = toCopy._type;
}

WrongCat::~WrongCat()
{
	MSG("Destructor called");
}

WrongCat	&WrongCat::operator=(WrongCat const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	WrongCat::makeSound() const
{
	SOUND;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
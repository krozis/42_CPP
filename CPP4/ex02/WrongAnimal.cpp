#include "WrongAnimal.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongAnimal::WrongAnimal(): _type("wrong animal")
{
	std::cout << PINK << "Default constructor for WrongAnimal called" << X << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy): _type(toCopy._type)
{
	std::cout << PINK << "copy constructor called for WrongAnimal" << X << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << PINK << "Destructor for WrongAnimal called" << X << std::endl;	
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &toAssign)
{
	std::cout << PINK << "WrongAnimal's assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	WrongAnimal::makeSound() const
{
	std::cout << ITALIC PINK << "weird fake animal sound" << X << std::endl;
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
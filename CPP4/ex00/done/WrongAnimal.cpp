#include "WrongAnimal.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongAnimal::WrongAnimal(): _type("wrong-animal")
{
	std::cout << BLUE << "WrongAnimal's destructor called" << X << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy)
{
	_type = toCopy._type;
	std::cout << BLUE << "WrongAnimal's copy constructor called" << X << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << "WrongAnimal's destructor called" << X << std::endl;
}


WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &toAssign)
{
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string	const WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << BLUE ITALIC << "random wrong-animal sound" << X << std::endl;
}

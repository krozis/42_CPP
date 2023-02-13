#include "Animal.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Animal::Animal(): _type("animal")
{
	std::cout << CYAN << "Animal's default constructor called" << X << std::endl;
}

Animal::Animal(Animal const &toCopy)
{
	_type = toCopy._type;
	std::cout << CYAN << "Animal's copy constructor called" << X << std::endl;
}

Animal::~Animal()
{
	std::cout << CYAN << "Animal's destructor called" << X << std::endl;
}


Animal	&Animal::operator=(Animal const &toAssign)
{
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string	const Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << CYAN ITALIC << "random animal sound" << X << std::endl;
}

#include "Animal.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Animal::Animal(): _type("random animal")
{
	std::cout << WHITE << "Animal's "
	<< "default constructor called with type " << BOLD << _type << X << std::endl;
}

Animal::Animal(Animal const &toCopy)
{
	*this = toCopy;
	std::cout << WHITE << "Animal's copy constructor called for type" << BOLD << _type << X << std::endl;
}

Animal::~Animal()
{
	std::cout << WHITE << "Animal's destructor called" << X << std::endl;
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
	std::cout << WHITE ITALIC << "random animal sound" << X << std::endl;
}

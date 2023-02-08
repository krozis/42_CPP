#include "Dog.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Dog::Dog()
{
	std::cout << YELLOW << "Dog's default constructor called" << X << std::endl;
	_type = "dog";
}

Dog::Dog(Dog const &toCopy)
{
	_type = toCopy._type;
	std::cout << YELLOW << "Dog's copy constructor called" << X << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW << "Dog's destructor called" << X << std::endl;
}


Dog	&Dog::operator=(Dog const &toAssign)
{
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Dog::makeSound() const
{
	std::cout << YELLOW ITALIC << "woooof woof woof !" << X << std::endl;
}

std::string const	Dog::getType() const
{
	return (_type);
}

#include "Dog.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Dog::Dog()
{
	std::cout << YELLOW << "Default constructor for dog instance called" << X << std::endl;
	_type = "dog";
}

Dog::Dog(Dog const &toCopy)
{
	std::cout << YELLOW << "Dog's copy constructor called" << X << std::endl;
	_type = toCopy._type;
}

Dog::~Dog()
{
	std::cout << YELLOW << "Dog's destructor called" << X << std::endl;
}


Dog	&Dog::operator=(Dog const &toAssign)
{
	std::cout << YELLOW << "Assignement operator called for dog" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Dog::makeSound() const
{
	std::cout << ITALIC YELLOW << "wooof woof woof! Woof! ( #BARFATTACKF )" << X << std::endl;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
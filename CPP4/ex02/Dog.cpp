#include "Dog.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Dog::Dog(): Animal("dog")
{
	std::cout << YELLOW << "Default constructor for dog instance called" << X << std::endl;
	_brain = new Brain;
}

Dog::Dog(Dog const &toCopy): Animal(toCopy)
{
	std::cout << YELLOW << "Dog's copy constructor called" << X << std::endl;
	_brain = new Brain(*(toCopy._brain));
}

Dog::~Dog()
{
	std::cout << YELLOW << "Dog's destructor called" << X << std::endl;
	delete (_brain);
}

Dog	&Dog::operator=(Dog const &toAssign)
{
	std::cout << YELLOW << "Assignement operator called for dog" << X << std::endl;
	Animal::operator=(toAssign);
	*_brain = *toAssign._brain;
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
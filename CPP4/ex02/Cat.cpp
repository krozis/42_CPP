#include "Cat.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cat::Cat(): Animal("cat")
{
	std::cout << CYAN << "Default constructor for cat instance called" << X << std::endl;
	_brain = new Brain;
}

Cat::Cat(Cat const &toCopy): Animal(toCopy)
{
	std::cout << CYAN << "Cat's copy constructor called" << X << std::endl;
	_brain = new Brain(*(toCopy._brain));
}

Cat::~Cat()
{
	std::cout << CYAN << "Cat's destructor called" << X << std::endl;
	delete (_brain);
}

Cat	&Cat::operator=(Cat const &toAssign)
{
	std::cout << CYAN << "Assignement operator called for cat" << X << std::endl;
	Animal::operator=(toAssign);
	*_brain = *toAssign._brain;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Cat::makeSound() const
{
	std::cout << ITALIC CYAN << "meeeeow meow... meow? ( #PURRKWAAA??? )" << X << std::endl;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
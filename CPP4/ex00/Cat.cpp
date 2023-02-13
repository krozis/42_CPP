#include "Cat.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cat::Cat()
{
	std::cout << CYAN << "Default constructor for cat instance called" << X << std::endl;
	_type = "cat";
}

Cat::Cat(Cat const &toCopy)
{
	std::cout << CYAN << "Cat's copy constructor called" << X << std::endl;
	_type = toCopy._type;
}

Cat::~Cat()
{
	std::cout << CYAN << "Cat's destructor called" << X << std::endl;
}


Cat	&Cat::operator=(Cat const &toAssign)
{
	std::cout << CYAN << "Assignement operator called for cat" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
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
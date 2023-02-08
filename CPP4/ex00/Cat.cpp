#include "Cat.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cat::Cat()
{
	std::cout << GREY << "Cat's default constructor called" << X << std::endl;
	_type = "cat";
}

Cat::Cat(Cat const &toCopy)
{
	_type = toCopy._type;
	std::cout << GREY << "Cat's copy constructor called" << X << std::endl;
}

Cat::~Cat()
{
	std::cout << GREY << "Cat's destructor called" << X << std::endl;
}


Cat	&Cat::operator=(Cat const &toAssign)
{
	if (this != &toAssign)
			_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Cat::makeSound() const
{
	std::cout << GREY ITALIC << "meeeoooooow !" << X << std::endl;
}

std::string const	Cat::getType() const
{
	return (_type);
}

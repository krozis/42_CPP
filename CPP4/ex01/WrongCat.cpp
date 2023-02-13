#include "WrongCat.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongCat::WrongCat()
{
	std::cout << MAGENTA << "WrongCat's default constructor called" << X << std::endl;
	_type = "wrong-cat";
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	_type = toCopy._type;
	std::cout << MAGENTA << "Cat's copy constructor called" << X << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << MAGENTA << "Cat's destructor called" << X << std::endl;
}


WrongCat	&WrongCat::operator=(WrongCat const &toAssign)
{
	if (this != &toAssign)
			_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	WrongCat::makeSound() const
{
	std::cout << MAGENTA ITALIC << "miaou miaou miaother furrker!" << X << std::endl;
}

std::string const	WrongCat::getType() const
{
	return (_type);
}

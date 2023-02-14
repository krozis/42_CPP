#include "WrongCat.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

WrongCat::WrongCat()
{
	std::cout << ORANGE << "Default constructor for WrongCat called" << X << std::endl;
	_type = "wrong cat";
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	std::cout << ORANGE << "WrongCat's copy constructor called" << X << std::endl;
	_type = toCopy._type;
}

WrongCat::~WrongCat()
{
	std::cout << ORANGE << "Destructor for WrongCat called" << X << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &toAssign)
{
	std::cout << ORANGE << "WrongCat's assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_type = toAssign._type;
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	WrongCat::makeSound() const
{
	std::cout << ITALIC ORANGE << "blup bip blop! ( #ThisIsSoWrong )" << X << std::endl;
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
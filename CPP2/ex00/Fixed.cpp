#include "Fixed.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed	&Fixed::operator=(Fixed const &toAssign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &toAssign)
			_value = toAssign.getRawBits();
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

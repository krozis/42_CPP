#include "Fixed.hpp"

#define X "\e[0m"
#define CONSTR "\e[38;5;202m"
#define DESTR "\e[33m"
#define COPY "\e[38;5;99m"
#define ASSIGN "\e[38;5;162m"
#define CALL "\e[38;5;45m"


/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Fixed::Fixed(): _value(0)
{
	std::cout << CONSTR << "Default constructor called" << X << std::endl;
}

Fixed::Fixed(Fixed const &toCopy)
{
	std::cout << COPY << "Copy constructor called" << X << std::endl;
	*this = toCopy;
}

Fixed::~Fixed()
{
	std::cout << DESTR << "Destructor called" << X << std::endl;
}


Fixed	&Fixed::operator=(Fixed const &toAssign)
{
	std::cout << ASSIGN << "Copy assignment operator called" << X << std::endl;
	if (this != &toAssign)
			_value = toAssign.getRawBits();
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

int	Fixed::getRawBits() const
{
	std::cout << CALL << "getRawBits member function called" << X << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
	std::cout << CALL << "setRawBits member function called" << X << std::endl;
}

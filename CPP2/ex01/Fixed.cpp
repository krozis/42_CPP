#include "Fixed.hpp"

#define X "\e[0m"
#define CONSTR "\e[38;5;202m"
#define ICONSTR "\e[32m"
#define FCONSTR "\e[38;5;114m"
#define DESTR "\e[33m"
#define COPY "\e[38;5;99m"
#define ASSIGN "\e[38;5;162m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Fixed::Fixed(): _value(0)
{
	std::cout << CONSTR << "Default constructor called" << X << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << ICONSTR << "Int constructor called" << X << std::endl;
	this->setRawBits(0);
	_value = value << _bits;
}

Fixed::Fixed(float const value)
{
	std::cout << FCONSTR << "Float constructor called" << X << std::endl;
	_value = roundf(value * (pow(2, _bits)));
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

/**
 * @brief Returns the raw value of the Fixed.
 */
int	Fixed::getRawBits() const
{
	return (_value);
}

/**
 * @brief Sets the raw value of the Fixed.
 */
void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

/**
 * @brief Returns the float value of the Fixed.
 */
float	Fixed::toFloat() const
{
	return (_value / pow(2, _bits));
}

/**
 * @brief Returns the int value of the Fixed.
 */
int		Fixed::toInt() const
{
	return (_value >> _bits);
}

/********************************
 *			OPERATORS 			*
 ********************************/

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed)
{
	flux << fixed.toFloat();
	return (flux);
}

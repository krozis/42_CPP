#include "Fixed.hpp"

// CONSTRUCTOR / DESTRUCTORS

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(0);
	_value = value << _bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value);
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

// Methods

int	Fixed::getRawBits() const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat() const
{
	return (_value / pow(2, _bits));
}

int		Fixed::toInt() const
{
	return (_value >> _bits);
}

// OPERATORS

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed)
{
	flux << fixed.toFloat();
	return (flux);
}

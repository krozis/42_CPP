#include "Fixed.hpp"
#include <cmath>

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(int const value)
{
	this->setRawBits(0);
	_value = value << _bits;
}

Fixed::Fixed(float const value)
{
	_value = roundf(value * (pow(2, _bits)));
}

Fixed::Fixed(Fixed const &toCopy)
{
	_value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
}


Fixed	&Fixed::operator=(Fixed const &toAssign)
{
	if (this != &toAssign)
			_value = toAssign.getRawBits();
	return (*this);
}

/********************************
 !*			PUBLIC	 			*
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

/**
 * @brief Returns the minimum between the two given Fixed.
 */
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * @brief Returns the minimum between the two given Fixed.
 */
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * @brief Returns the maximum between the two given Fixed.
 */
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * @brief Returns the maximum between the two given Fixed.
 */
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

/********************************
 *			OPERATORS 			*
 ********************************/

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed)
{
	flux << fixed.toFloat();
	return (flux);
}

// COMPARE

bool	operator==(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool	operator!=(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() != b.getRawBits());
}

bool	operator<(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool	operator>(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool	operator<=(Fixed const &a, Fixed const &b)
{
	return (a == b || a < b);
}

bool	operator>=(Fixed const &a, Fixed const &b)
{
	return (a == b || a > b);
}

// ARITHMETIC

Fixed	operator+(Fixed const &a, Fixed const &b)
{
	return (a.toFloat() + b.toFloat());
}

Fixed	operator-(Fixed const &a, Fixed const &b)
{
	return (a.toFloat() - b.toFloat());
}

Fixed	operator*(Fixed const &a, Fixed const &b)
{
	return (a.toFloat() * b.toFloat());
}

Fixed	operator/(Fixed const &a, Fixed const &b)
{
	return (a.toFloat() / b.toFloat());
}

// INCREMENTATION/DECREMENTATION

Fixed	&Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	++*this;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--*this;
	return (tmp);
}

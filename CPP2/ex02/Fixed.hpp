#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &toCopy);
		~Fixed();
		Fixed	&operator=(Fixed const &toAssign);

		int		getRawBits() const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

	private:
		int					_value;
		const static int	_bits = 8;
};

bool	operator==(Fixed const &a, Fixed const &b);
bool	operator!=(Fixed const &a, Fixed const &b);
bool	operator<(Fixed const &a, Fixed const &b);
bool	operator<=(Fixed const &a, Fixed const &b);
bool	operator>(Fixed const &a, Fixed const &b);
bool	operator>=(Fixed const &a, Fixed const &b);

Fixed	operator+(Fixed const &a, Fixed const &b);
Fixed	operator-(Fixed const &a, Fixed const &b);
Fixed	operator*(Fixed const &a, Fixed const &b);
Fixed	operator/(Fixed const &a, Fixed const &b);

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed);

#endif
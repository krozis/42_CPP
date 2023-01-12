#ifndef FIXED_H
# define FIXED_H

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

	private:
		int					_value;
		const static int	_bits = 8;
};

std::ostream &operator<<(std::ostream &flux, Fixed const &fixed);

#endif
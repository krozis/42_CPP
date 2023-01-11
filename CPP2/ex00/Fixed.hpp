#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &toCopy);
		~Fixed();
		Fixed	&operator=(Fixed const &toAssign);
		int		getRawBits() const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		const static int	_bits = 8;
};

#endif
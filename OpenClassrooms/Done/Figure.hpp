#ifndef FIGURE_HPP
# define FIGURE_HPP

# include <iostream>
# include <cmath>

# define X "\e[0m"
# define BLACK "\e[30m"
# define GREY "\e[90m"
# define RED "\e[31m"
# define CYAN "\e[36m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define BLUE "\e[94m"
# define MAGENTA "\e[35m"

class Figure
{
	public:
		Figure();
		Figure(Figure const &toCopy);
		virtual ~Figure();
		Figure	&operator=(Figure const &toAssign);

		virtual void	display() const = 0;
		virtual void	perimeter() const = 0;
		virtual void	area() const = 0;

	private:

};

#endif
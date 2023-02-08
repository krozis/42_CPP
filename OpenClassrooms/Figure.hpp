#ifndef FIGURE_H
# define FIGURE_H

# include <iostream>
# include <cmath>

# define X "\033[0m"
# define BLACK "\033[30m"
# define GREY "\033[90m"
# define RED "\033[31m"
# define CYAN "\033[36m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[94m"
# define MAGENTA "\033[35m"

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
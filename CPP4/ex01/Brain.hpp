#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <algorithm>

# define X "\e[0m"
# define BOLD "\e[1m"
# define GREEN "\e[32m"

class Brain
{
	public:
		Brain();
		Brain(Brain const &toCopy);
		~Brain();
		Brain	&operator=(Brain const &toAssign);

	private:
		std::string		*_ideas;
		int	_nb_ideas;
	//	std::string[100]	_copy(std::string toCopy[100]);
	//	std::string	*_init();
};

#endif

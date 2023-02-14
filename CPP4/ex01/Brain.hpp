#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "cpp_pool.hpp"

class Brain
{
	public:
		Brain();
		Brain(Brain const &toCopy);
		~Brain();
		Brain	&operator=(Brain const &toAssign);

	private:
		std::string	_ideas[100];
};

#endif

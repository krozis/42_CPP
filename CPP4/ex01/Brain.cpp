#include "Brain.hpp"



/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Brain::Brain()
{
	std::cout << BOLD GREEN << "Brain constructor called" << X << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
	std::cout << BOLD GREEN << "Brain copy constructor called" << X << std::endl;
	*this = toCopy;
}

Brain::~Brain()
{
	std::cout << BOLD GREEN << "Brain destructor called" << X << std::endl;
}


Brain	&Brain::operator=(Brain const &toAssign)
{
	std::cout << BOLD GREEN << "Brain assignement operator called" << X << std::endl;
	if (this != &toAssign)
	{
		for (int i = 0; i < toAssign._nb_ideas; i++)
			_ideas[i] = toAssign._ideas[i];
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
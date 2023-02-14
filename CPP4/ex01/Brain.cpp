#include "Brain.hpp"

static void	_copyArray(std::string const src[100], std::string dest[100])
{
	for (int i = 0; i < 100; i++)
		dest[i] = src[i];
}

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Brain::Brain()
{
	std::cout << PURPLE << "Default constructor for Brain called" << X << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
	std::cout << PURPLE << "Brain's copy constructor called" << X << std::endl;
	_copyArray(toCopy._ideas, _ideas);
}

Brain::~Brain()
{
	std::cout << PURPLE << "Destructor for Brain called" << X << std::endl;
}

Brain	&Brain::operator=(Brain const &toAssign)
{
	std::cout << PURPLE << "Brain's assignement operator called" << X << std::endl;
	if (this != &toAssign)
		_copyArray(toAssign._ideas, _ideas);
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
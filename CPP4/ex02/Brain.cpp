#include "Brain.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;162m"
#define ENDL X << std::endl
#define NAME COLOR << "Brain 🧠 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define DEFAULT_IDEA "No idea found"

static void	_initArray(std::string arr[100])
{
	for (int i = 0; i < 100; i++)
		arr[i] = DEFAULT_IDEA;
}

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Brain::Brain()
{
	MSG("Default constructor called");
	_initArray(_ideas);
}

Brain::Brain(Brain const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Brain::~Brain()
{
	MSG("Destructor called");
}

Brain	&Brain::operator=(Brain const &toAssign)
{
	MSG("Assignement operator called");
	for (int i = 0; i < 100; i++)
		_ideas[i] = toAssign.getIdea(i);
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Brain::setIdea(std::string const idea, int const idx)
{
	_ideas[idx] = idea;
}

std::string const	&Brain::getIdea(int idx) const
{
		
	if (idx < 0 || idx > 100)
		return (_ideas[0]);
	return (_ideas[idx]);
}

std::string const	*Brain::getIdeaAddress(int idx) const
{
		
	if (idx < 0 || idx > 100)
		return (&_ideas[0]);
	return (&_ideas[idx]);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
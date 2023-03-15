#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;99m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Cat 🐈 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "meeeeow meow... meow? ( #PURRKWAAA??? )" << ENDL


/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Cat::Cat()
{
	MSG("Default constructor called");
	_type = "cat";
	_brain = new Brain();
}

Cat::Cat(Cat const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Cat::~Cat()
{
	MSG("Destructor called");
	delete (_brain);
}

Cat	&Cat::operator=(Cat const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
	{
		_type = toAssign._type;
		*_brain = *toAssign._brain;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Cat::makeSound() const
{
	SOUND;
}

void	Cat::addIdea(std::string const &idea)
{
	static int	idx = 0;
	_brain->setIdea(idea, idx);
	idx++;
	if (idx >= 100)
		idx = 0;
}

void	Cat::displayIdeas(int start, int end) const
{
	std::cout << COLOR << "||  ADRESS  |     VALUE     ||" << X << std::endl;
	if (start < 0)
		start = 0;
	if (start > 100)
		start = 99;
	if (end < 0 || end < start || end > 99)
		end = 99;
	while (start <= end)
	{
		_displayOne(start);
		start++;
	}
}

/********************************
 *			PRIVATE	 			*
 ********************************/

void	Cat::_displayOne(int idx) const
{
	std::cout << COLOR << "|| " << _brain->getIdeaAddress(idx) << " | " << _brain->getIdea(idx) << " ||" << X << std::endl;
}

/********************************
 *			OPERATORS 			*
 ********************************/
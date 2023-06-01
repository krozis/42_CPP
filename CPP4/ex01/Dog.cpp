#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"

#define X "\e[0m"
#define COLOR "\e[38;5;202m"
#define ITALIC "\e[3m"
#define ENDL X << std::endl
#define NAME COLOR << "Dog 🐕 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define SOUND std::cout << NAME ITALIC << "wooof woof woof! Woof! ( #BARFATTACKF )" << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Dog::Dog()
{
	MSG("Default constructor called");
	_type = "dog";
	_idx = 0;
	_brain = new Brain();
}

Dog::Dog(Dog const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Dog::~Dog()
{
	MSG("Destructor called");
	delete (_brain);
}

Dog	&Dog::operator=(Dog const &toAssign)
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

void	Dog::makeSound() const
{
	SOUND;
}

void	Dog::addIdea(std::string const &idea)
{
	_brain->setIdea(idea, _idx);
	_idx++;
	if (_idx >= 100)
		_idx = 0;
}

void	Dog::displayIdeas(int start, int end) const
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

void	Dog::_displayOne(int idx) const
{
	std::cout << COLOR << "|| " << _brain->getIdeaAddress(idx) << " | " << _brain->getIdea(idx) << " ||" << X << std::endl;
}

/********************************
 *			OPERATORS 			*
 ********************************/
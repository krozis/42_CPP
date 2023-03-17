#include "MateriaSource.hpp"
#include "AMateria.hpp"

#define X "\e[0m"
#define COLOR "\e[32m"
#define ENDL X << std::endl
#define NAME COLOR << "MateriaSource 💠 : "
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

MateriaSource::MateriaSource()
{
	MSG("Default constructor called");
	for (int i = 0; i < 4; i++)
		_models[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &toCopy)
{
	*this = toCopy;
}

MateriaSource::~MateriaSource()
{
	MSG("Destructor called");
	for (int i = 0; i < 4; i++)
	{
		if (_models[i])
			delete(_models[i]);
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &toAssign)
{
	if (this != &toAssign)
	{
		for (int i = 0; i < 4; i++)
		{
			if (toAssign._models[i])
				_models[i] = toAssign._models[i]->clone();
			else
				_models[i] = toAssign._models[i];
		}
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_models[i] == NULL)
		{
			MSG_TWO("Learning a model for materia ", m->getType());
			_models[i] = m->clone();
			return ;
		}
	}
	MSG("Models learning list full");
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_models[i] && _models[i]->getType() == type)
			return (_models[i]->clone());
	}
	MSG_TWO(type, " is an unknown type of Materia");
	return (0);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

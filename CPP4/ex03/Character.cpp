#include "Character.hpp"
#include "AMateria.hpp"

#define COLOR "\e[38;5;202m" //ORANGE
#define X "\e[0m"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Character::Character(std::string const &name): _name(name)
{
	std::cout << COLOR << "Constructor called for the Character " << _name << X << std::endl;
	for (int i = 0; i < 4; i++)
		_items[i] = NULL;
}

Character::Character(Character const &toCopy): _name(toCopy._name)
{
	std::cout << COLOR << "Copy constructor called for the Character " << _name << X << std::endl;
	_copy_items(toCopy);
}

Character::~Character()
{
	std::cout << COLOR << "destructor called for the Character " << _name << X << std::endl;
}

Character	&Character::operator=(Character const &toAssign)
{
	if (this != &toAssign)
	{
		_name = toAssign._name;
		_copy_items(toAssign);
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string	const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_items[i] == NULL)
		{
			_items[i] = m;
			return ;
		}		
	}
	std::cout << COLOR << "no more room in " << _name << "'s inventory to add a materia" << X << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		std::cout << COLOR << "item index to unequip must be between 0 and 3 included" << X << std::endl;
	else
	{
		if (_items[idx] == NULL)
			std::cout << COLOR << "no materia at the index " << idx << X << std::endl;
		else
		{
			std::cout << COLOR << _name << "unequiped " << _items[idx]->getType() << " materia at the index " << idx << X << std::endl;
			_items[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
		std::cout << COLOR << "item index to use must be between 0 and 3 included" << X << std::endl;
	else
	{
		if (_items[idx] == NULL)
			std::cout << COLOR << "no materia at the index " << idx << X << std::endl;
		else
			_items[idx]->use(target);
	}
}

/********************************
 *			PRIVATE	 			*
 ********************************/

void	Character::_copy_items(Character const &target)
{
	for (int i = 0; i < 4; i++)
		_items[i] = target._items[i];
}

/*
void	Character::_clean_inventory()
{
	for (int i = 0; i < 4; i++)
	{
		if ()
	}
}
*/
/********************************
 *			OPERATORS 			*
 ********************************/

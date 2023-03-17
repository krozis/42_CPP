#include "Character.hpp"
#include "AMateria.hpp"

#define X "\e[0m"
#define COLOR "\e[94m"
#define ENDL X << std::endl
#define NAME COLOR << "Character 🧙 : "
#define SUB_MSG(msg) std::cout << COLOR << msg << ENDL
#define MSG(msg) std::cout << NAME << msg << ENDL
#define MSG_TWO(first, second) std::cout << NAME << first << second << ENDL

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Character::Character(std::string const name): _name(name)
{
	MSG_TWO("Constructor called for ", _name);
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &toCopy)
{
	MSG("Copy constructor called");
	*this = toCopy;
}

Character::~Character()
{
	MSG_TWO("Destructor called for ", _name);
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete(_inventory[i]);
	}
}

Character	&Character::operator=(Character const &toAssign)
{
	MSG("Assignement operator called");
	if (this != &toAssign)
	{
		_name = toAssign._name;
		for (int i = 0; i < 4; i++)
		{
			if (toAssign._inventory[i])
				_inventory[i] = toAssign._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (!m || (m->getType() != "ice" && m->getType() != "cure"))
		MSG("Invalid Materia");
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] == NULL)
			{
				MSG_TWO("Equiped a materia with type ", m->getType());
				_inventory[i] = m;
				return ;
			}
		}
		MSG("Inventory is full");
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		MSG("Only index between 0 and 3 included are allowed");
	else if (_inventory[idx])
	{
		MSG_TWO("Unequiped item at slot ", idx);
		delete(_inventory[idx]);
		_inventory[idx] = NULL;
	}
	else
		MSG_TWO("No item at slot ", idx);
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		MSG("Only index between 0 and 3 included are allowed");
	else
	{
		if (_inventory[idx]) 
			_inventory[idx]->use(target);
		else
			MSG_TWO("No item at slot ", idx);
	}
}

void	Character::listInventory() const
{
	MSG_TWO(_name, "'s Inventory :");
	for (int i = 0; i < 4; i++)
	{
		std::cout << COLOR << " " << i << " - ";
		if (_inventory[i])
			SUB_MSG(_inventory[i]->getType());
		else
			SUB_MSG("EMPTY SLOT");
	}
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/

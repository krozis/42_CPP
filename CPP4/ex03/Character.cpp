#include "Character.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Character::Character()
{

}

Character::Character(Character const &toCopy)
{
	(void)toCopy;
}

Character::~Character()
{

}

Character	&Character::operator=(Character const &toAssign)
{
	if (this != &toAssign)
		(void)toAssign;
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

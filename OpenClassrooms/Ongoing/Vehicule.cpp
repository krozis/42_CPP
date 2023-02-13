#include "Vehicule.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Vehicule::Vehicule(): _nb_wheel(0), _price(0)
{
}

Vehicule::Vehicule(Vehicule const &toCopy): _nb_wheel(toCopy._nb_wheel), _price(toCopy._price)
{
}

Vehicule::~Vehicule()
{
}


Vehicule	&Vehicule::operator=(Vehicule const &toAssign)
{
	if (this != &toAssign)
	{
		_nb_wheel = toAssign._nb_wheel;
		_price = toAssign._price;
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
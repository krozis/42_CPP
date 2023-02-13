#include "Moto.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Moto::Moto()
{
	_max_spd = 0;
	_nb_wheel = 2;
}

Moto::Moto(unsigned int max_speed, unsigned int price)
{
	_nb_wheel = 2;
	_max_spd = max_speed;
	_price = price;
}

Moto::Moto(Moto const &toCopy)
{
	_nb_wheel = toCopy._nb_wheel;
	_price = toCopy._price;
	_max_spd = toCopy._max_spd;
}

Moto::~Moto()
{
}


Moto	&Moto::operator=(Moto const &toAssign)
{
	if (this != &toAssign)
	{
		_nb_wheel = toAssign._nb_wheel;
		_price = toAssign._price;
		_max_spd = toAssign._max_spd;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Moto::display() const
{
	std::cout << YELLOW << "Moto with a max speed of " << _max_spd 
	<< "mph at the price of $" << _price << X << std::endl;
}

unsigned int	Moto::get_wheel_number() const
{
	return (_nb_wheel);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
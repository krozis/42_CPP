#include "Car.hpp"

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

Car::Car()
{
	_nb_door = 0;
	_nb_wheel = 4;
}

Car::Car(unsigned int nb_doors, unsigned int price)
{
	_price = price;
	_nb_door = nb_doors;
	_nb_wheel = 4;
}

Car::Car(Car const &toCopy)
{
	_nb_wheel = toCopy._nb_wheel;
	_price = toCopy._price;
	_nb_door = toCopy._nb_door;
}

Car::~Car()
{
}

Car	&Car::operator=(Car const &toAssign)
{
	if (this != &toAssign)
	{
		_nb_wheel = toAssign._nb_wheel;
		_price = toAssign._price;
		_nb_door = toAssign._nb_door;
	}
	return (*this);
}

/********************************
 *			PUBLIC	 			*
 ********************************/

void	Car::display() const
{
	std::cout << BLUE << "Car with " << _nb_door 
	<< " doors at the price of $" << _price << X << std::endl;
}

unsigned int	Car::get_wheel_number() const
{
	return (_nb_wheel);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

/********************************
 *			OPERATORS 			*
 ********************************/
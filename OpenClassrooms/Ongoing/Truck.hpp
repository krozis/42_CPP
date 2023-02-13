#ifndef TRUCK_HPP
# define TRUCK_HPP

# include "opc.hpp"
# include "Vehicule.hpp"

class Truck
{
	public:
		Truck();
		Truck(unsigned int x, unsigned int price);
		Truck(Truck const &toCopy);
		~Truck();
		Truck	&operator=(Truck const &toAssign);

		void			display() const;
		unsigned int	get_wheel_number() const;


	private:
		unsigned int	
};

#endif
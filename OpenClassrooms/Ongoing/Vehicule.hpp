#ifndef VEHICULE_HPP
# define VEHICULE_HPP

# include "opc.hpp"

class Vehicule
{
	public:
		Vehicule();
		Vehicule(Vehicule const &toCopy);
		virtual ~Vehicule();
		Vehicule	&operator=(Vehicule const &toAssign);

		virtual void			display() const = 0;
		virtual unsigned int	get_wheel_number() const = 0;
	protected:
		unsigned int	_nb_wheel;
		unsigned int	_price;
};

#endif
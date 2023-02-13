#ifndef MOTO_HPP
# define MOTO_HPP

# include "opc.hpp"
# include "Vehicule.hpp"

class Moto: public Vehicule
{
	public:
		Moto();
		Moto(unsigned int max_speed, unsigned int price);
		Moto(Moto const &toCopy);
		~Moto();
		Moto	&operator=(Moto const &toAssign);

		void			display() const;
		unsigned int	get_wheel_number() const;

	private:
		unsigned int	_max_spd;

};

#endif
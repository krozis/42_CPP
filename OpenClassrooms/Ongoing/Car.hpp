#ifndef CAR_HPP
# define CAR_HPP

# include "opc.hpp"
# include "Vehicule.hpp"

class Car: public Vehicule
{
	public:
		Car();
		Car(unsigned int nb_portes, unsigned int price);
		Car(Car const &toCopy);
		virtual ~Car();
		Car	&operator=(Car const &toAssign);

		void			display() const;
		unsigned int	get_wheel_number() const;

	private:
		unsigned int	_nb_door;
};

#endif
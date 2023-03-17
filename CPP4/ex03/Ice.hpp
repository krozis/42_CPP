#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class ICharacter;

class Ice: virtual public AMateria
{
	public:
		Ice();
		Ice(Ice const &toCopy);
		~Ice();
		Ice	&operator=(Ice const &toAssign);

		AMateria	*clone() const;
		void		use(ICharacter &target) const;

	private:

};

#endif

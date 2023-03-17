#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class ICharacter;

class Cure: virtual public AMateria
{
	public:
		Cure();
		Cure(Cure const &toCopy);
		~Cure();
		Cure	&operator=(Cure const &toAssign);

		AMateria	*clone() const;
		void		use(ICharacter &target) const;

	private:

};

#endif

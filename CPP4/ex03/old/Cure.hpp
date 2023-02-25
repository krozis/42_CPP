#ifndef CURE_HPP
# define CURE_HPP

# include "cpp_pool.hpp"
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(Cure const &toCopy);
		~Cure();
		Cure	&operator=(Cure const &toAssign);

		AMateria	*clone() const;

	private:

};

#endif

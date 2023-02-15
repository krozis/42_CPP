#ifndef ICE_HPP
# define ICE_HPP

# include "cpp_pool.hpp"

class AMateria;

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const &toCopy);
		~Ice();
		Ice	&operator=(Ice const &toAssign);

		AMateria	*clone() const;

	private:

};

#endif

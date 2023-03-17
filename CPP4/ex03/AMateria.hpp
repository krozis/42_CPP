#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &toCopy);
		virtual ~AMateria();
		AMateria	&operator=(AMateria const &toAssign);

		std::string const	&getType() const;
		virtual AMateria		*clone() const = 0;
		virtual void			use(ICharacter &target) const = 0;

	protected:
		std::string	_type;

};

#endif

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "cpp_pool.hpp"

//class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &toCopy);
		virtual	~AMateria();
		AMateria	&operator=(AMateria const &toAssign);

		std::string const	&getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
//		virtual void		use(ICharacter& target);
	
	protected:
		std::string	_type;

	private:

};

#endif

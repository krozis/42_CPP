#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "cpp_pool.hpp"

class ICharacter
{
	public:
		ICharacter();
		ICharacter(ICharacter const &toCopy);
		virtual ~ICharacter();
		ICharacter	&operator=(ICharacter const &toAssign);

		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;

	protected:
		std::string	_name;
		AMateria	*_inventory[4];

	private:

};

#endif

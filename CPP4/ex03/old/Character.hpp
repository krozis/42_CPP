#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		Character(Character const &toCopy);
		~Character();
		Character	&operator=(Character const &toAssign);


	private:

};

#endif

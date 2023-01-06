#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const	&getType() const;
		void				setType(std::string type);

	private:
		 std::string	_type;
};

std::ostream	&operator<<(std::ostream &flux, Weapon const &weapon);

#endif
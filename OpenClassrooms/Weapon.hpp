#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

# include <string>
# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string name, int dmg);
		~Weapon(void);
		int	getDmgValue() const;
		std::string	getName() const;

	private:
		std::string	m_name;
		int			m_dmg;
};

#endif
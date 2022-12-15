#ifndef PERSONNAGE_CLASS_H
# define PERSONNAGE_CLASS_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class Personnage
{
	public:

	Personnage(std::string name, int max_hp, Weapon &weapon);
	~Personnage(void);

	void		attack(Personnage &target) const;
	void		drinkPotion(int potion_value);
	void		changeWeapon(Weapon &weapon);
	bool		isAlive() const;

	private:

	const std::string	m_name;
	const int			m_max_hp;
	int					m_hp;
	Weapon				&m_weapon;

	std::string	getName() const;
	void		takeDmg(int dmg);
};

#endif
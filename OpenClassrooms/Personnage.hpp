#ifndef PERSONNAGE_CLASS_H
# define PERSONNAGE_CLASS_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class Personnage
{
	public:

	Personnage(std::string name, int max_hp, std::string weapon_name, int weapon_dmg);
	Personnage(std::string name);
	~Personnage(void);

	void		attack(Personnage &target) const;
	void		drinkPotion(int potion_value);
	void		changeWeapon(std::string new_weapon_name, int new_weapon_dmg);
	bool		isAlive() const;
	void		getState() const;

	private:

	const std::string	m_name;
	const int			m_max_hp;
	int					m_hp;
	Weapon				m_weapon;

	std::string	getName() const;
	void		takeDmg(int dmg);
};

#endif
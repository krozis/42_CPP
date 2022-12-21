#include <iostream>
#include <string>
#include "Personnage.hpp"
#include "Weapon.hpp"

int main(void)
{
	
	Personnage	david("David", 15, "Sword", 10);
	Personnage	goliath("Goliath");
	
	david.attack(goliath);
	goliath.attack(david);
	david.drinkPotion(5);
	david.changeWeapon("Machine Gun", 30);
	david.attack(goliath);
	goliath.changeWeapon("Knife", 10);
	david.getState();
	
	while (goliath.isAlive() && david.isAlive())
	{
		if (goliath.isAlive())
			goliath.attack(david);
		if (david.isAlive())
			david.attack(goliath);
	}
	return (0);
}

#include <iostream>
#include <string>
#include "Personnage.hpp"
#include "Weapon.hpp"

int main(void)
{
	/*
	Weapon			sword("Sword", 15);
	Weapon			machine_gun("Machine Gun", 30);
	Weapon			bare_hands("Bare Hands", 5);
	Weapon			knife("knife", 10);
	*/
	Personnage	david("David", 15, Weapon("Sword", 15));
	Personnage	goliath("Goliath", 100, Weapon("Bare Hands", 5));
	
	david.attack(goliath);
	goliath.attack(david);
	david.drinkPotion(5);
	david.changeWeapon(dWeapon("Machine Gun", 30));
	david.attack(goliath);
	goliath.changeWeapon(Weapon("knife", 10));
	while (goliath.isAlive() && david.isAlive())
	{
		if (goliath.isAlive())
			goliath.attack(david);
		if (david.isAlive())
			david.attack(goliath);
	}
	return (0);
}

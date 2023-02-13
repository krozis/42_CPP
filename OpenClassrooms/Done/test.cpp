#include <iostream>
#include <string>
#include <cstdlib>
#include "Duree.hpp"
#include "Dude.hpp"
#include "Warrior.hpp"

int main(void)
{
	Warrior	toto("Roland");
	Dude	titi("Dudule");

	toto.hit(titi);
	toto.hit_hard(titi);
	return (EXIT_SUCCESS);
}

#include <cstdlib>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#define NB 5
#define BIG "\e[1m \e[4m"
#define RED "\e[31m"
#define UNDERLINED "\e[4m"
#define ENDL "\e[0m" << std::endl
#define BL std::cout << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL
#define MSG_TYPE(type, msg) std::cout << msg << "\e[31m" << type << ENDL

int	main()
{
	MSG(BIG RED, "\n       CHARACTER TESTS       ");
	MSG(BIG, "\n-----CREATOR------\n");
	Character	toto("Gaston");

	MSG(BIG RED, "\n       MATERIA TESTS       ");
	{
		MSG(BIG, "\n-----CREATOR------\n");
		Ice			a;
		AMateria	*m1 = a.clone();
		Cure 		b;
		AMateria	*m2 = b.clone();

		MSG(BIG, "\n------USE------\n");
		a.use(toto);
		m1->use(toto);
		b.use(toto);
		m2->use(toto);

		MSG(BIG, "\n----DESTRUCTOR----\n");
		delete (m1);
		delete (m2);
	}
	MSG(BIG RED, "\n       CHARACTER TESTS       ");
	MSG(BIG, "\n----INVENTORY----\n");
	MSG(UNDERLINED, "\n   LIST  \n");
	toto.listInventory();
	MSG(UNDERLINED, "\n   USE  \n");
	for (int i = -1; i < 5; i++)
		toto.use(i, toto);
	MSG(UNDERLINED, "\n   UNEQUIP  \n");
	for (int i = -1; i < 5; i++)
		toto.unequip(i);
	MSG(UNDERLINED, "\n   EQUIP  \n");
	for (int i = 0; i < 2; i++)
		toto.equip(new Ice);
	for (int i = 2; i < 4; i++)
		toto.equip(new Cure);	
	MSG(UNDERLINED, "\n   USE A VALID MATERIA  \n");
	for (int i = -1; i < 5; i++)
		toto.use(i, toto);
	MSG(BIG, "\n----DESTRUCTOR----\n");
	return (EXIT_FAILURE);
}

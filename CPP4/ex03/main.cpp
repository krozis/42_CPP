#include <cstdlib>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

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
	{
		MSG(BIG RED, "\n       CHARACTER TESTS       ");
		MSG(BIG, "\n-----CREATOR------\n");
		Character	toto("Gaston");
		Character	tutu("Popeye");

		MSG(BIG RED, "\n       MATERIA TESTS       ");
		{
			MSG(BIG, "\n-----CONSTRUCTOR------\n");
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
			toto.use(i, tutu);
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
			toto.use(i, tutu);
		MSG(UNDERLINED, "\n   UNEQUIP AND LIST  \n");
		toto.unequip(1);
		toto.listInventory();
		MSG(BIG, "\n------COPY------\n");
		ICharacter	*titi = new Character(toto);
		titi->use(2, toto);
		titi->unequip(2);
		titi->use(2, toto);
		MSG(UNDERLINED, "\n   COPY WHEN EQUIPED  \n");
		toto = tutu;
		toto.listInventory();
		MSG(BIG, "\n----DESTRUCTOR----\n");
		delete (titi);
	}
	{
		MSG(BIG RED, "\n       MATERIA_SOURCE TESTS       ");
		MSG(BIG, "\n-----CONSTRUCTOR------\n");
		MateriaSource	ms;
		Character		toto("Alfred");
		AMateria		*a = new(Ice);
		AMateria		*b = new(Cure);

		MSG(UNDERLINED, "\n   CREATE FROM UNKNOWN  \n");
		ms.createMateria("ice");

		MSG(BIG, "\n------LEARNING PHASE------\n");
		ms.learnMateria(a);
		ms.learnMateria(b);
		ms.learnMateria(a);
		ms.learnMateria(a);
		ms.learnMateria(b);
		ms.learnMateria(b);
		ms.learnMateria(b);

		MSG(BIG, "\n------CREATING PHASE------\n");
		toto.equip(ms.createMateria("cure"));
		toto.use(0, toto);
		
		MSG(BIG, "\n----DESTRUCTOR----\n");
		delete (a);
		delete (b);
	}
	return (EXIT_FAILURE);
}

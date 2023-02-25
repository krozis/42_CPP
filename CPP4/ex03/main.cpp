#include "main.hpp"

int	main()
{
	std::cout << BOLD UNDERLINED << "\n------ CREATORS --------\n" << X << std::endl;
	AMateria	*a_ice;
	Ice			i;
	AMateria	*a_cure;
	Cure		c;
	Character	gus("gustave");
	ICharacter	*toto;
	
	std::cout << BOLD UNDERLINED << "\n------ MATERIA CLONE + GETTYPE --------\n" << X << std::endl;
	a_ice = i.clone();
	std::cout << "newly created materia's type is " << a_ice->getType() << std::endl;
	BACKLINE;
	a_cure = c.clone();
	std::cout << "newly created materia's type is " << a_cure->getType() << std::endl;
	BACKLINE;

	std::cout << BOLD UNDERLINED << "\n------ CHARACTER TESTS --------\n" << X << std::endl;
	gus.equip(&i);	
	toto = new Character(gus);
	toto->use(0, gus);
	toto->unequip(0);
	toto->unequip(0);
	gus.use(0, gus);
	std::cout << BOLD UNDERLINED << "\n------ DESTRUCTORS --------\n" << X << std::endl;
	std::cout << UNDERLINED << "      dynamic      \n" << X << std::endl;
	delete (a_ice);
	delete (a_cure);
	delete (toto);
	std::cout << UNDERLINED << "\n      static      \n" << X << std::endl;

	return (EXIT_SUCCESS);
}
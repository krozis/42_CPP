#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NB 5
#define BIG "\e[1m \e[4m"
#define UNDERLINED "\e[4m"
#define ENDL "\e[0m" << std::endl
#define BL std::cout << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL
#define MSG_TYPE(type, msg) std::cout << msg << "\e[31m" << type << ENDL

int	main()
{
	{	//PERSONNAL TESTS
		MSG(BIG, "\n--- CONSTRUCTOR ---\n");
		//Animal	iggyPop;
		Dog		titi;
		Animal	*toto = new Dog;
		Cat		tutu;
		Animal	*tata = new Cat;

		MSG(BIG, "\n---- SOUNDS ----\n");
		titi.makeSound();
		toto->makeSound();
		tutu.makeSound();
		tata->makeSound();


		MSG(BIG, "\n--- CONSTRUCTOR ---\n");
		delete (toto);
		delete (tata);
	}
	return (EXIT_SUCCESS);
}

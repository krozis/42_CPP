#include <cstdlib>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define MSG(msg) std::cout << "\e[1m \e[4m" << msg << "\e[0m" << std::endl
#define GET_TYPE(type) std::cout << "Animal of type " << type << std::endl;

int	main()
{
	{
		MSG("\n------ EXAMPLE FROM SUBJECT ------\n");
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	}
	{
		MSG("\n- EXAMPLE FROM SUBJECT WITH WRONG ANIMAL -\n");
		const WrongAnimal*	wrong = new WrongAnimal();
		const WrongAnimal*	k = new WrongCat();
		std::cout << k->getType() << " " << std::endl;
		k->makeSound(); //will output the cat sound!
		wrong->makeSound();
	}
	{
		MSG("\n--- ANIMALS ---\n");
		Animal	toto;
		Animal	*tutu = new Animal;

		toto.makeSound();
		tutu->makeSound();
		GET_TYPE(toto.getType());
		GET_TYPE(tutu->getType());

		delete(tutu);
	}
	{
		MSG("\n----- DOG -----\n");
		Dog		tutu;
		Dog		toto(tutu);
		Animal	*titi = new Dog;
		Dog		*tata = new Dog;

		tutu.makeSound();
		toto.makeSound();
		titi->makeSound();
		tata->makeSound();
		GET_TYPE(toto.getType());
		GET_TYPE(tutu.getType());
		GET_TYPE(titi->getType());
		GET_TYPE(tata->getType());
	}
	{
		MSG("\n----- CAT -----\n");
		Cat		tutu;
		Cat		toto(tutu);
		Animal	*titi = new Cat;
		Cat		*tata = new Cat;

		tutu.makeSound();
		toto.makeSound();
		titi->makeSound();
		tata->makeSound();
		GET_TYPE(toto.getType());
		GET_TYPE(tutu.getType());
		GET_TYPE(titi->getType());
		GET_TYPE(tata->getType());
	}
	{
		MSG("\n-- WRONG ANIMALS --\n");
		WrongAnimal	toto;
		WrongAnimal	*tutu = new WrongAnimal;

		toto.makeSound();
		tutu->makeSound();
		GET_TYPE(toto.getType());
		GET_TYPE(tutu->getType());

		delete(tutu);
	}
	{
		MSG("\n--- WRONG CAT ---\n");
		WrongCat		tutu;
		WrongCat		toto(tutu);
		WrongAnimal		*titi = new WrongCat;
		WrongCat		*tata = new WrongCat;

		tutu.makeSound();
		toto.makeSound();
		titi->makeSound();
		tata->makeSound();
		GET_TYPE(toto.getType());
		GET_TYPE(tutu.getType());
		GET_TYPE(titi->getType());
		GET_TYPE(tata->getType());
	}
	return (EXIT_SUCCESS);
}

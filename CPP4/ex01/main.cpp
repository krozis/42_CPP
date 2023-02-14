#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define NB 10

int	main()
{
	const Animal *zoo[NB];

	std::cout << BOLD << "\n------ CONSTRUCTION ------\n" << X << std::endl;
	for (int i = 0; i < NB; i++)
	{
		if (i < NB / 2)
		{
			std::cout << UNDERLINED << "\nCreating Animial of type " << ITALIC RED << "dog" << X << std::endl;
			zoo[i] = new Dog();
		}
		else
		{
			std::cout << UNDERLINED << "\nCreating Animial of type " << ITALIC RED << "cat" << X << std::endl;
			zoo[i] = new Cat();
		}
	}

	std::cout << BOLD << "\n------ SOUND ------\n" << X << std::endl;
		for (int i = 0; i < NB; i++)
	{
		std::cout << "\nAnimal's type is " << ITALIC RED << zoo[i]->getType() << X << std::endl;
		zoo[i]->makeSound();
	}

	std::cout << BOLD << "\n------ DESTRUCTION ------\n" << X << std::endl;
	for (int i = 0; i < NB; i++)
	{
		std::cout << UNDERLINED << "\ndeleting Animial of type " << ITALIC RED << zoo[i]->getType() << X << std::endl;
		delete zoo[i];
	}


/* 	std::cout << BOLD << "\n------ ANIMAL ------\n" << std::endl;

	Animal	yo;
	Animal	glup(yo);
	Animal	*ptr = new Animal;

	yo = glup;
	yo.makeSound();
	ptr->makeSound();
	

	std::cout << BOLD << "\n------ DOG ------\n" << std::endl;

	Dog		a;
	Dog 	b(a);
	Animal	*ptr1 = new Dog;
	Dog		*ptr2 = new Dog;

	a = b;
	a.makeSound();
	b.makeSound();
	ptr1->makeSound();
	ptr2->makeSound();

	std::cout << BOLD << "\n------ CAT ------\n" << std::endl;

	Cat		x;
	Cat 	y(x);
	Animal	*salad = new Cat;
	Cat		*x_files = new Cat;

	x = y;
	x.makeSound();
	y.makeSound();
	salad->makeSound();
	x_files->makeSound();

	std::cout << BOLD << "\n------ EXAMPLE FROM SUBJECT ------\n" << X << std::endl;
	
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << BOLD << "\n------ EXAMPLE FROM SUBJECT WITH WRONG ANIMAL------\n" << X << std::endl;
	
	const WrongAnimal*	wrong = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //will output the cat sound!
	wrong->makeSound();

	std::cout << BOLD << "\n------ DESTRUCTION ------\n" << X << std::endl;
	std::cout << "Animal" << std::endl;
	delete (ptr);
	delete (meta);
	std::cout << "\nDog" << std::endl;
	delete (ptr1);
	delete (ptr2);
	delete (j);
	std::cout << "\nCats" << std::endl;
	delete (salad);
	delete (x_files);
	delete (i);
	std::cout << "\nWrongAnimal" << std::endl;
	delete (wrong);
	delete (k);

	std::cout << "\nNon dynamic allocation:" << std::endl;
 */
	return (EXIT_SUCCESS);
}

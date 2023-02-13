#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	std::cout << BOLD << "\n------ ANIMAL ------\n" << std::endl;

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


	std::cout << BOLD << "\n------ DESTRUCTION ------\n" << std::endl;
	std::cout << "Animal" << std::endl;
	delete (ptr);
	std::cout << "\nDog" << std::endl;
	delete (ptr1);
	delete (ptr2);
	std::cout << "\nCats" << std::endl;
	delete (salad);
	delete (x_files);
	std::cout << "\nNon dynamic allocation:" << std::endl;
	return (EXIT_SUCCESS);
}

#include <cstdlib>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	/*
	 * TESTS FROM SUBJECT: 
	 */
	std::cout << "\n---- ANIMALS -----\n" << std::endl;

	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete meta;
	delete cat;
	delete dog;

	std::cout << "\n---- WRONG ANIMALS -----\n" << std::endl;

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << catWrong->getType() << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	delete metaWrong;
	delete catWrong;
	/*
	 * MORE TESTS
	*/
	
	return (EXIT_SUCCESS);
}

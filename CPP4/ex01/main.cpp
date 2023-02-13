#include <cstdlib>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Dog	medor;
	Dog			kiwi;
	
	kiwi = medor;
	
	return (EXIT_SUCCESS);
}

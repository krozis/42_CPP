#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>

class Animal;

class Dog: virtual public Animal
{
	public:
		Dog();
		Dog(Dog const &toCopy);
		~Dog();
		Dog	&operator=(Dog const &toAssign);

		void	makeSound() const;

	private:

};

#endif
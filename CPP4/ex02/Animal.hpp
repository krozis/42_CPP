#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(Animal const &toCopy);
		virtual ~Animal();
		Animal	&operator=(Animal const &toAssign);

		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		std::string	_type;

	private:

};

#endif
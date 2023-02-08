#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const &toCopy);
		virtual ~Dog();
		Dog	&operator=(Dog const &toAssign);

		std::string const	getType() const;
		void				makeSound() const;

	private:

};

#endif
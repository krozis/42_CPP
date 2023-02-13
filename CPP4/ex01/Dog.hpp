#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const &toCopy);
		~Dog();
		Dog	&operator=(Dog const &toAssign);

		std::string const	getType() const;
		void				makeSound() const;

	private:
		Brain	*_brain;
};

#endif

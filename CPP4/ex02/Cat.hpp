#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const &toCopy);
		~Cat();
		Cat	&operator=(Cat const &toAssign);

		void	makeSound() const;

	private:
		Brain	*_brain;

};

#endif

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const &toCopy);
		~Cat();
		Cat	&operator=(Cat const &toAssign);

		std::string	const	getType() const;
		void				makeSound() const;

	private:

};

#endif
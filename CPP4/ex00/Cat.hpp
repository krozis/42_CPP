#ifndef CAT_HPP
# define CAT_HPP

class Animal;

class Cat: virtual public Animal
{
	public:
		Cat();
		Cat(Cat const &toCopy);
		~Cat();
		Cat	&operator=(Cat const &toAssign);

		void	makeSound() const;

	private:

};

#endif
#ifndef CAT_HPP
# define CAT_HPP

class Animal;
class Brain;

class Cat: virtual public Animal
{
	public:
		Cat();
		Cat(Cat const &toCopy);
		~Cat();
		Cat	&operator=(Cat const &toAssign);

		void	makeSound() const;
		void	addIdea(std::string const &idea);
		void	displayIdeas(int start, int end) const;

	private:
		Brain	*_brain;
		static int	_idx;

		void	_displayOne(int idx) const;
};

#endif
#ifndef DOG_HPP
# define DOG_HPP

class Animal;
class Brain;

class Dog: virtual public Animal
{
	public:
		Dog();
		Dog(Dog const &toCopy);
		~Dog();
		Dog	&operator=(Dog const &toAssign);

		void	makeSound() const;
		void	addIdea(std::string const &idea);
		void	displayIdeas(int start, int end) const;

	private:
		Brain	*_brain;

		void	_displayOne(int idx) const;
};

#endif
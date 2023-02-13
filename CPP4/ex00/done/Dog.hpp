#ifndef DOG_HPP
# define DOG_HPP

class Dog
{
	public:
		Dog();
		Dog(Dog const &toCopy);
		~Dog();
		Dog	&operator=(Dog const &toAssign);


	private:

};

#endif
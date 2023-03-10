#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongAnimal;
class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &toCopy);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &toAssign);

		void	makeSound() const;

	private:

};

#endif
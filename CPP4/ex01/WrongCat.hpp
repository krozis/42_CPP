#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &toCopy);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &toAssign);

		std::string	const	getType() const;
		void				makeSound() const;

	private:

};

#endif
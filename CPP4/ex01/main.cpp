#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NB 5
#define BIG "\e[1m \e[4m"
#define UNDERLINED "\e[4m"
#define ENDL "\e[0m" << std::endl
#define BL std::cout << std::endl
#define MSG(type, msg) std::cout << type << msg << ENDL
#define MSG_TYPE(type, msg) std::cout << msg << "\e[31m" << type << ENDL

int Cat::_idx = 0;
int Dog::_idx = 0;

int	main()
{
/* 	{	//SUBJECT
		MSG(BIG, "\n-- EXAMPLE FROM SUBJECT --\n");
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//
		delete i;
	} */
	{	//PERSONNAL TESTS
		MSG(BIG, "\n--- CONSTRUCTOR ---\n");
		const Animal *zoo[NB];
		for (int i = 0; i < NB; i++)
		{
			if (i < NB / 2)
			{
				MSG(UNDERLINED, "Creating a Dog");
				zoo[i] = new Dog();
			}
			else
			{
				MSG(UNDERLINED, "Creating a Cat");
				zoo[i] = new Cat();
			}
		}

		MSG(BIG, "\n---- SOUNDS ----\n");
			for (int i = 0; i < NB; i++)
		{
			MSG_TYPE(zoo[i]->getType(), "\nAnimal's type is ");
			zoo[i]->makeSound();
		}
			MSG(BIG, "\n--- DESTRUCTOR ---");
		for (int i = 0; i < NB; i++)
		{
			MSG_TYPE(zoo[i]->getType(), "\ndeleting Animial of type ");
			delete zoo[i];
		}

		//ADDITIONAL TESTS
		MSG(BIG, "\n---- CHECK COPY DOG----\n");
		{
			Dog			src;
			Dog 		cpy;

			std::cout << std::endl;
			src.addIdea("Am I alive ??");
			src.displayIdeas(0, 3);
			std::cout << std::endl;
			cpy.displayIdeas(0, 3);
			cpy = src;
			std::cout << std::endl;
			cpy.displayIdeas(0, 3);
			std::cout << std::endl;
		}
		MSG(BIG, "\n---- CHECK COPY CAT----\n");
		{
			Cat			src;
			Cat 		cpy;

			BL;
			src.addIdea("Am I alive ??");
			src.addIdea("It's funny...");
			src.displayIdeas(0, 3);
			BL;
			cpy.displayIdeas(0, 3);
			BL;
			cpy = src;
			BL;
			cpy.displayIdeas(0, 3);
			BL;
		}
		MSG(BIG, "\n-------DEBUG-------\n");
		{
			Cat toto;
			Dog titi;

			toto.addIdea("LOLOLOLOLO");
			toto.displayIdeas(0, 10);
			titi.addIdea("LOLOLOLOLO");
			titi.displayIdeas(0, 10);
		}
	}
	return (EXIT_SUCCESS);
}

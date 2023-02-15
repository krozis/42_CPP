#include "cpp_pool.hpp"

int	main()
{
	std::cout << BOLD UNDERLINED << "\n------ CREATORS --------\n" << X << std::endl;
	AMateria	*t_cure;
	AMateria	*t_ice;
	Ice			t;
	Cure		c;

	std::cout << BOLD UNDERLINED << "\n------ CLONE + GETTYPE --------\n" << X << std::endl;
	t_ice = t.clone();
	std::cout << "type is " << t_ice->getType() << std::endl;
	BACKLINE;
	t_cure = c.clone();
	std::cout << "type is " << t_cure->getType() << std::endl;

	std::cout << BOLD UNDERLINED << "\n------ DESTRUCTORS --------\n" << X << std::endl;
	std::cout << UNDERLINED << "\n      dynamic      \n" << X << std::endl;
	delete (t_ice);
	delete (t_cure);
	std::cout << UNDERLINED << "\n      static      \n" << X << std::endl;
	return (EXIT_SUCCESS);
}
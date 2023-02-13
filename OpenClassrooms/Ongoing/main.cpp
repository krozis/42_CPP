# include "opc.hpp"
# include "Car.hpp"
# include "Moto.hpp"

int	main()
{
	std::cout << BOLD BLUE << "------ CARS ------" << X << std::endl;

	Car	pijo;
	Car	rino(5, 5300);
	Car fiot(3, 2500);
	Vehicule *opal = new Car(5, 8100);

	pijo.display();
	pijo = rino;
	pijo.display();
	rino.display();
	fiot.display();
	opal->display();
	delete opal;

	std::cout << BOLD YELLOW << "------ MOTOS ------" << X << std::endl;

	Moto	suzkiki;
	Moto	hundo(350, 4000);
	Moto	kowozoku(250, 2500);
	Vehicule *strumph = new Moto(400, 8000);
	Vehicule *ptr;

	suzkiki.display();
	suzkiki = hundo;
	suzkiki.display();
	hundo.display();
	kowozoku.display();
	strumph->display();
	delete strumph;
	ptr = &kowozoku;
	ptr->display();

	std::cout << BOLD MAGENTA << "------ TRUCKS ------" << X << std::endl;



	return (EXIT_SUCCESS);
}
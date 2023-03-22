#include "iter.hpp"

template <typename T>
void display(T const &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void displayPlusOne(T const &a)
{
	std::cout << a + 1 << std::endl;
}

template <typename T>
void displayDouble(T const &a)
{
	std::cout << a * 2 << std::endl;
}

int main(void)
{
	int tab[2];
	float truc[2];

	tab[0] = 2;
	tab[1] = -5;
	truc[0] = 0.0f;
	truc[1] = 25.0f;

	//INTS
	std::cout << "Display" << std::endl;
	::iter(tab, 2, &display);
	std::cout << "Display +1 " << std::endl;
	::iter(tab, 2, &displayPlusOne);
	std::cout << "Display double" << std::endl;
	::iter(tab, 2, &displayDouble);

	//FLOATS
	std::cout << "Display" << std::endl;
	::iter(truc, 2, &display);
	std::cout << "Display +1 " << std::endl;
	::iter(truc, 2, &displayPlusOne);
	std::cout << "Display double" << std::endl;
	::iter(truc, 2, &displayDouble);
	return (0);
}
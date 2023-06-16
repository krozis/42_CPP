#include "iter.hpp"

#define TITLE(msg) std::cout << "\e[38;5;45m\e[1m \e[4m" << msg << "\e[0m"<< std::endl
#define SUBTITLE(msg) std::cout << "\e[90m\e[4m" << msg << "\e[0m"<< std::endl
#define MSG(msg) std::cout << msg << std::endl

template <typename T>
void displayLower(T const a)
{
	std::string x = a;
	for (std::string::iterator it = x.begin(); it != x.end(); it++)
		std::cout << (char) tolower(*it);
	std::cout << std::endl;
}

template <typename T>
void displayUpper(T const a)
{
	std::string x = a;
	for (std::string::iterator it = x.begin(); it != x.end(); it++)
		std::cout << (char) toupper(*it);
	std::cout << std::endl;
}

template <typename T>
void display(T const &x)
{
	MSG(x);
}

template <typename T>
void displayPlusOne(T const &x)
{
	MSG(x + 1);
}

template <typename T>
void displayDouble(T const &x)
{
	MSG(x * 2);
}

int main(void)
{
	TITLE("----- INT -----\n");
	{
		int tab[5] = {3, 42, 25, 5, -8};
		SUBTITLE("  Display  ");
		::iter(tab, 5, &display);
		SUBTITLE("  Display +1  ");
		::iter(tab, 5, &displayPlusOne);
		SUBTITLE("  Display double  ");
		::iter(tab, 5, &displayDouble);
	}
	TITLE("\n---- FLOAT ----\n");
	{
		float tab[5] = {0.0f, 42.0f, 25.5f, 5.0f, -8.0};
		SUBTITLE("  Display  ");
		::iter(tab, 5, &display);
		SUBTITLE("  Display +1  ");
		::iter(tab, 5, &displayPlusOne);
		SUBTITLE("  Display double  ");
		::iter(tab, 5, &displayDouble);
	}
	TITLE("\n---- STRING ----\n");
	{
		std::string	tab[5] = {"Hello", "World", "How", "are", "you"};
		SUBTITLE("  Display  ");
		::iter(tab, 5, &display);
		SUBTITLE("  Display Upper ");
		::iter(tab, 5, &displayUpper);
		SUBTITLE("  Display Lower ");
		::iter(tab, 5, &displayLower);
	}
	return (0);
}

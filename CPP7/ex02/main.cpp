#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define DEFAULT_SIZE 5
#define MAX_SIZE 750
#define TITLE(msg) std::cout << "\e[38;5;45m\e[1m \e[4m" << msg << "\e[0m"<< std::endl
#define SUBTITLE(msg) std::cout << "\e[90m\e[4m" << msg << "\e[0m"<< std::endl
#define BL std::cout << std::endl
#define USAGE std::cout << "Usage: ./array <nb>\nMax size is actually " << MAX_SIZE << std::endl; return (EXIT_FAILURE)
#define CONTENT(name, idx, val) std::cout << name << " at index [" << idx << "]: " << val << std::endl;
#define MSG_SIZE(name, size) std::cout << name << " is an Array of size " << size << std::endl
#define MSG_VAL(name, idx, value) std::cout << name << "[" << idx << "] = " << value << std::endl

template<typename T>
T const &min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
void	_fill_nb(Array<T> &array, std::string str)
{
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = str;
}

template<typename T>
void	_fill_nb(Array<T> &array, unsigned int min)
{
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = min + i;
}

template<typename T>
void	_display(std::string name, Array<T> &array)
{
	for (unsigned int i = 0; i < array.size(); i++)
		CONTENT(name, i, array[i]);
	BL;
}

int main(int ac, char** av)
{
	unsigned int	size;
	if (ac > 2)
		{USAGE;}
	else if (ac < 2)
		size = DEFAULT_SIZE;
	else
		size = min(MAX_SIZE, abs(atoi(av[1])));

	TITLE("--- CREATING ARRAYS ---\n");
	try
	{
		SUBTITLE("  INT  ");
		{
			Array<int> arr(size);
			_fill_nb(arr, 1);
			_display("INT", arr);
		}
		SUBTITLE("  FLOAT  ");
		{
			Array<float> arr(size);
			_fill_nb(arr, 1);
			_display("FLOAT", arr);
		}		
		SUBTITLE("   CHAR   ");
		{
			Array<char> arr(size);
			_fill_nb(arr, 65);
			_display("CHAR", arr);			
		}
		SUBTITLE("  STRING  ");
		{
			Array<std::string> arr(size);
			_fill_nb(arr, "YO!");
			_display("CHAR", arr);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
//------------------------------------------------------------//
	TITLE("\n--- COPY AND ASSIGN ---\n");
	try
	{
		SUBTITLE("  CREATING ARRAY  ");
		Array<int> arr(3);

		_fill_nb(arr, 1);
		_display("ORIGINAL", arr);

 		SUBTITLE("\n  COPYING ARRAY AND MODIFY IT ");
		{
			Array<int> copy(arr);
			copy[0] = 424242;
			_display("COPY", copy);
			_display("ORIGINAL", arr);
		}
 		SUBTITLE("\n  ASSIGN AND MODIFY IT ");
		{
			Array<int> assign = arr;
			assign[1] = 555555;
			_display("ASSIGNED", assign);
			_display("ORIGINAL", arr);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
//------------------------------------------------------------//
	TITLE("\n--- EXCEPTION CHECK ---\n");
	try
	{
		Array<int> excep_tab(size);
		MSG_SIZE("excep_tab", excep_tab.size());
		std::cout <<  "Changin value of excep_tab[size] : ";
		excep_tab[excep_tab.size()] = 5;
		std::cout << "Random message which will never be displayed";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

//------------------------------------------------------------//
	TITLE("\n------ SIZE ------\n");
	try
	{
		SUBTITLE("  SIZE = 1  ");
		{
			Array<int> i(1);
			MSG_SIZE("my_array", i.size());
		}
		SUBTITLE("  SIZE = 0  ");
		{
			Array<int> i(0);
			MSG_SIZE("my_array", i.size());
		}
		SUBTITLE("  SIZE = 424242  ");
		{
			Array<int> i(424242);
			MSG_SIZE("my_array", i.size());
		}
		SUBTITLE("  USER CHOICE  ");
		{
			Array<int> i(size);
			MSG_SIZE("my_array", i.size());
		}

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (EXIT_SUCCESS);
}
#include "whatever.hpp"

#define TITLE(msg) std::cout << "\e[38;5;45m\e[1m \e[4m" << msg << "\e[0m"<< std::endl
#define SUBTITLE(msg) std::cout << "\e[90m\e[4m" << msg << "\e[0m"<< std::endl
#define MSG(msg) std::cout << msg << std::endl
#define MSG2(msg, val) std::cout << msg << val << std::endl
#define VAL(type, val_a, val_b) std::cout << type << " a = " << val_a << std::endl << type << " b = " << val_b << std::endl

int main( void )
{
	TITLE(" ----- TESTS FROM SUBJECT -----\n");
	{
		int	a = 2;
		int	b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
 		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		 std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	TITLE("\n ------- SWAP -------\n");
	{
		SUBTITLE("  int  \n");
		{
			int	a = 42, b = 25;
			VAL("int", a, b);
			::swap(a, b);
			MSG("  After Swap :");
			VAL("int", a, b);
		}
		SUBTITLE("\n  char  \n");
		{
			char	a = 'A', b = 'B';
			VAL("char", a, b);
			::swap(a, b);
			MSG("  After Swap :");
			VAL("char", a, b);
		}
		SUBTITLE("\n  string  \n");
		{
			std::string	a = "Hello", b = "world!";
			VAL("string", a, b);
			::swap(a, b);
			MSG("  After Swap :");
			VAL("string", a, b);
		}
	}
	TITLE("\n ------- MIN -------\n");
	{
		SUBTITLE("  int  \n");
		{
			int	a = 42, b = 25;
			VAL("int", a, b);
			MSG2("min = ", ::min(a, b));
		}
		SUBTITLE("\n  char  \n");
		{
			char	a = 'A', b = 'B';
			VAL("char", a, b);
			MSG2("min = ", ::min(a, b));
		}
		SUBTITLE("\n  string  \n");
		{
			std::string	a = "Hello", b = "world!";
			VAL("string", a, b);
			MSG2("min = ", ::min(a, b));
		}
	}
	TITLE("\n ------- MAX -------\n");
	{
		SUBTITLE("  int  \n");
		{
			int	a = 42, b = 25;
			VAL("int", a, b);
			MSG2("max = ", ::max(a, b));
		}
		SUBTITLE("\n  char  \n");
		{
			char	a = 'A', b = 'B';
			VAL("char", a, b);
			MSG2("max = ", ::max(a, b));
		}
		SUBTITLE("\n  string  \n");
		{
			std::string	a = "Hello", b = "world!";
			VAL("string", a, b);
			MSG2("max = ", ::max(a, b));
		}
	}
	return (EXIT_SUCCESS);
}
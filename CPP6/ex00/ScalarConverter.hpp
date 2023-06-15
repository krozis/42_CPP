#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	public:
		static void	convert (std::string);

	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& toCopy);
		ScalarConverter& operator=(const ScalarConverter& toAssign);
};

#endif
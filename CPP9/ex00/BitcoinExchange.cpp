#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <limits>

# define OUTPUT(date, mult , value) std::cout << date << " => " << mult << " = " << mult * value << std::endl

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

BitcoinExchange::BitcoinExchange(std::string const &input_file, std::string const &data_file): _input_file(input_file)
{
	init(data_file);
	processInput();
}

BitcoinExchange::~BitcoinExchange() { }

/********************************
 *		UNUSED COPLIEN			*
 ********************************/

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	_data = copy._data;
	_input_file = copy._input_file;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	if (this != &copy)
	{
		_data = copy._data;
		_input_file = copy._input_file;		
	}
	return (*this);
}

/********************************
 *			GETTER/SETTER		*
 ********************************/

std::string const	&BitcoinExchange::getInputFile() const { return (_input_file); }

std::map<std::string, float> const	&BitcoinExchange::getData() const { return (_data); }

void	BitcoinExchange::setInputFile(std::string const &input_file) { _input_file = input_file; }

/********************************
 *			PRIVATE	 			*
 ********************************/

void	BitcoinExchange::init(std::string const &data_file)
{
	std::ifstream	file(data_file);

	if (!file)
		throw (std::runtime_error("Failed to open data file: " + data_file));
	
	std::string		line;
	while (std::getline(file, line))
	{
		std::istringstream	iss(line);
		std::string			date;
		float				value;
		if (std::getline(iss, date, ',') && iss >> value)
			_data[date] = value;
	}
	file.close();
}

void	BitcoinExchange::processInput()
{
	std::ifstream	file(_input_file);

	if (!file)
		throw std::runtime_error("Failed to open input file: " + _input_file);

	std::string		line;
	while (std::getline(file, line))
	{
		try
		{
			processLine(line);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	file.close();
}

/**
 * todo: MAX_INT limits ! 
*/
void	BitcoinExchange::processLine(std::string const &line)
{
	//ignore first line (data | value)
	static bool	isFirstLine = true;
	if (isFirstLine)
	{
		isFirstLine = false;
		return ;
	}

	//ignore empty line without leaving program
	if (line.empty())
		return ;
	
	//get separator position
	size_t	separator_pos = line.find('|');
	if (separator_pos == std::string::npos)
		throw std::runtime_error("Invalid line format: missing separator '|'");

	//extraction of the date and value
	std::string	date = line.substr(0, separator_pos);
	std::string	strvalue = line.substr(separator_pos + 1);

	//check date is ok
	if (!isValidDate(date))
		throw std::runtime_error("Invalid date: " + date);

	//convert value from string to float
	float	value;
	try
	{
		value = std::stof(strvalue);
	}
	catch(const std::exception& e)
	{
		throw std::runtime_error("Invalid value: " + strvalue);
	}
	
	//check if positive value
	if (value <= 0)
		throw std::runtime_error("Invalid value: must be positive");
	
	//check if not superior to int_max
	if (value > std::numeric_limits<int>::max())
		throw std::runtime_error("Invalid value: too large number");

	//Look for the date
	date = findClosestDate(date);
	if (date.empty())
		throw std::runtime_error("Inexistant date and no anterior date found");
	
	//Display
	OUTPUT(date, value, _data[date]);
}

bool	BitcoinExchange::isValidDate(std::string const &date) const
{
	if (date.length() != 11 || date[4] != '-' || date[7] != '-')
		return (false);

	int	year = std::stoi(date.substr(0, 4));
	int	month = std::stoi(date.substr(5, 2));
	int	day = std::stoi(date.substr(8, 2));

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return (false);

	//30 days month
	if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
		return (false);

	//february
	if (month == 2)
	{
		bool	leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
		if (day > 29 || (!leap && day > 28))
			return (false);
	}
	return  (true);
}

std::string	BitcoinExchange::findClosestDate(std::string const &date) const
{
	std::map<std::string, float>::const_iterator it = _data.lower_bound(date);

	if (it != _data.end() && it->first == date)
		return (date);
	
	if (it == _data.begin())
		return ("");

	--it;
	return (it->first);
}
#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <cstdlib>

# define OUTPUT(date, mult , value) std::cout << date << " => " << mult << " = " << mult * value << std::endl

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

BitcoinExchange::BitcoinExchange(std::string const &inputfile, std::string const &datafile)
{
	if (inputfile.empty())
		throw (std::runtime_error("invalid arguments given."));
	init(datafile);
	process(inputfile);
}

BitcoinExchange::~BitcoinExchange() {}

/********************************
 *		 UNUSED COPLIEN 		*
 ********************************/

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	_data = copy._data;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &copy)
{
	if (this != &copy)
		_data = copy._data;
	return (*this);
}

/********************************
 *			PRIVATE	 			*
 ********************************/

void	BitcoinExchange::init(std::string const &datafile)
{
	std::ifstream	file(datafile.c_str());
	std::string	line;

	if (!file.is_open())
		throw (std::runtime_error("Failed to open data file: " + datafile));
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

void	BitcoinExchange::process(std::string const &inputfile)
{
	std::ifstream	file(inputfile.c_str());
	std::string		line;

	if (!file.is_open())
		throw std::runtime_error("Failed to open input file: " + inputfile);
	while (std::getline(file, line))
	{
		try
		{
			processLine(line);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
	file.close();
}

void	BitcoinExchange::processLine(std::string const &line)
{
	
	if (line.compare("date | value") == 0) // ignore first line
		return ;
	else if (line.empty())    //ignore empty lines without leaving program
		return ;
	
	//get separator position
	size_t		separator_pos = line.find('|');
	if (separator_pos == std::string::npos)
		throw std::runtime_error("bad input => missing separator '|'");
	
	//extraction of the date and value
	std::string	date = line.substr(0, separator_pos);
	std::string	strvalue = line.substr(separator_pos + 1);

	//check date is ok
	if (!isValidDate(date))
		throw std::runtime_error("invalid date => " + date);

	//convert value from string to float
	float		value;
	std::istringstream valueStream(strvalue);
	if (!(valueStream >> value))
		throw std::runtime_error("invalid value => " + strvalue);
	//check if positive
	if (value < 0)
		throw std::runtime_error("not a positive number.");	
	//check if not superior to 1000
	if (value > 1000)
		throw std::runtime_error("too large number");

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

	int year, month, day;
	if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return (false);

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

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

/**
 * map : key = date (string)
 * associed value = value (float)
*/

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string const &inputfile, std::string const &datafile);
		~BitcoinExchange();

	private:
		std::map<std::string, float>	_data;

		//unused Coplien
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &toCopy);
		BitcoinExchange	&operator=(BitcoinExchange const &toAssign);

		void		init(std::string const &datafile);  //fill _data map from data.csv
		void		process(std::string const &inputfile);

		void		processLine(std::string const &line);
		bool		isValidDate(std::string const &date) const;
		std::string	findClosestDate(std::string const &date) const;

};

#endif

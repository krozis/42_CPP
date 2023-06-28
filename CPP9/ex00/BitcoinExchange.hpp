#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(std::string const &input_file, std::string const &data_file);
		~BitcoinExchange();

	private:
		std::map<std::string, float>	_data;
		std::string						_input_file;

		//Unused Coplien
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);	
		BitcoinExchange	&operator=(BitcoinExchange const &copy);

		void		init(std::string const &data_file);
		void		processInput();
		void		processLine(std::string const &line);
		bool		isValidDate(std::string const &date) const;
		std::string	findClosestDate(std::string const &date) const;

	public:
		//GETTER/SETTER
		std::map<std::string, float> const	&getData() const;
		std::string	const					&getInputFile() const;
 
		void	setInputFile(std::string const &input_file);
};

#endif

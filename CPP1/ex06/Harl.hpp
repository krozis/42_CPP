#ifndef HARL_H
# define HARL_H

# include <iostream>

# define LIGHTBLUE "\e[94m"
# define END "\033[0m"

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	defaultComplain(void);

};

#endif
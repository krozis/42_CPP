#include <cstdlib>
#include <fstream>
#include <iostream>

static int	argError(std::string msg)
{
	std::cout << msg << std::endl;
	return (EXIT_FAILURE); 
}

static void	getContent(std::ifstream &fileIn, std::string &content)
{
	char		c = '\0';

	while (!fileIn.eof())
	{
		fileIn >> std::noskipws >> c;
		content += c;
	}
}

static void	fillAndReplace(std::ofstream &fileOut, std::string content, char **av)
{
	int	pos = -2;
	int i = 0;

	while (i < (int)content.size())
	{
		pos = content.find(av[2], i);
		if (pos == -1)
		{
			fileOut << content.substr(i, content.size() - (i + 1));
			break ;
		}
		else
		{
			fileOut << content.substr(i, pos - i);
			fileOut << av[3];
			i = pos + std::string(av[2]).size();
		}
	}
}

int	main(int ac, char **av)
{

	std::ifstream	fileIn;
	std::string		content;
	std::ofstream	fileOut;

	if (ac != 4)
		return (argError("Usage: ./my_sed <file> \"old_word\" \"new_word\""));
	if (std::string(av[2]).size() < 1)
		return (argError("old_word cant be an empty string"));
	fileIn.open(av[1]);
	if (!fileIn.is_open() || fileIn.peek() == EOF)
		return (argError("Error while opening the file."));
	//if ()
	fileOut.open((std::string(av[1]) + ".replace").c_str());
	if (!fileOut.is_open())
		return (argError("Error with the output file."));
	getContent(fileIn, content);
	fileIn.close();
	fillAndReplace(fileOut, content, av);
	fileOut.close();
	return (EXIT_SUCCESS);
}

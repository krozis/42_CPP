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

	pos = content.find(av[2]);
	if (pos == -1)
		fileOut << content;
	else
	{
		//CORRECT TO BRING JUST HERE
		while (pos != -1)
		{
			fileOut << content.substr(i, pos);
			i += content.substr(i, pos).size() + std::string(av[2]).size();
			fileOut << av[3];
		}
		//CORRECT TO BRING JUST HERE ^
	}
	(void)fileOut;
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
	if (!fileIn)
		return (argError("Error while opening the file."));
	fileOut.open((std::string(av[1]) + ".replace").c_str());
	if (!fileOut)
		return (argError("Error with the output file."));
	getContent(fileIn, content);
	fillAndReplace(fileOut, content, av);
	return (EXIT_SUCCESS);
}

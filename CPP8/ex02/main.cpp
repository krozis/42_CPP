#include <iostream>
#include <cstdlib>
#include <list>
#include "MutantStack.hpp"

#define TITLE(msg) std::cout << "\e[1m\e[4m\e[38;5;202m\n" << msg << "\e[0m\n"
#define MSG(msg, value) std::cout << msg << value << std::endl

int main()
{
	TITLE("---- SIMPLE TESTS -> std::string ----");
	{
		MutantStack<std::string> mutantStack;
		MSG("\n", "__Before push__");
		MSG("Size of stack = ", mutantStack.size());
		MSG("Is it empty ? -> ", mutantStack.empty());
		mutantStack.push("How");
		mutantStack.push("Are");
		mutantStack.push("You ?");

		MSG("\n", "__After push__");
		MSG("Size of stack = ", mutantStack.size());
		MSG("Is it empty ? -> ", mutantStack.empty());

		for (MutantStack<std::string>::iterator it = mutantStack.begin(); it != mutantStack.end(); it++)
			MSG("with iterator: ", *it);
	}
	TITLE("---- FROM SUBJECT WITH MUTANT ----");
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	TITLE("---- FROM SUBJECT WITH LIST ----");
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int, std::list<int> > s(mstack);
	}
	return (EXIT_SUCCESS);
}

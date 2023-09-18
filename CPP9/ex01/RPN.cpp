#include "RPN.hpp"
#include <cstdlib>
#include <cctype>
#include <sstream>

#define OUTPUT(output) std::cout << output << std::endl

/********************************
 *		CREATOR / DESTRUCTOR	*
 ********************************/

RPN::RPN(std::string const &input)
{
	int					err_code;
	std::istringstream	iss(input);
	std::string			token;

	while (iss >> token)
	{
		err_code = false;
		if (isNum(token) == true)
		{
			_stack.push(std::atoi(token.c_str()));
			err_code = true;
		}
		else if (isOper(token) == true && _stack.size() >= 2)
			err_code = oper(token[0]);
		if (err_code == false)
		{
			OUTPUT("Error");
			return ;
		}
	}
	if (_stack.size() != 1)
		OUTPUT("Error");
	else
		OUTPUT(_stack.top());
}

RPN::~RPN() { }

/********************************
 *		 UNUSED COPLIEN 		*
 ********************************/

RPN::RPN() { }

RPN::RPN(RPN const &toCopy)
{
	std::stack<int> newStack = toCopy._stack;
	_stack = newStack;
}

RPN	&RPN::operator=(RPN const &toAssign)
{
	if (this != &toAssign)
	{
		std::stack<int> newStack = toAssign._stack;
		_stack = newStack;
	}
	return (*this);
}


/********************************
 *			PRIVATE	 			*
 ********************************/

bool	RPN::isOper(std::string const &s) const
{
	if (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/')
		return (true);
	return (false);
}

bool	RPN::isNum(std::string const &s) const
{
	if (s.size() != 1)
		return (false);
	if (!std::isdigit(s[0]))
		return (false);
	return (true);
}

bool	RPN::oper(char c)
{
	int	two = _stack.top();
	_stack.pop();
	int	one = _stack.top();
	_stack.pop();
	
	switch (c)
	{
	case '+':
		_stack.push (one + two);
		break;
	case '-':
		_stack.push (one - two);
		break;
	case '*':
		_stack.push (one * two);
		break;
	case '/':
		if (two == 0)
			return (false);
		_stack.push (one / two);
		break;
	default:
		break;
	}
	return (true);
}
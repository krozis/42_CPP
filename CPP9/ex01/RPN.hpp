#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class RPN
{
	public:
		RPN(std::string const &input);
		~RPN();

	private:
		std::stack<int>	_stack;
		
		RPN();
		RPN(RPN const &toCopy);
		RPN	&operator=(RPN const &toAssign);

		bool	isOper(std::string const &s) const;
		bool	isNum(std::string const &s) const;
		bool	oper(char c);
};

#endif

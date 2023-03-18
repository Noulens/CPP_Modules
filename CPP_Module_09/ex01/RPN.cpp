/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:50:22 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/16 13:52:09 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
	this->_stack = copy.getStack();
}

RPN::~RPN()
{
}

RPN & RPN::operator=(const RPN &assign)
{
	this->_stack = assign.getStack();
	return (*this);
}

std::stack<int, std::deque<int> > RPN::getStack() const
{
	return (this->_stack);
}

const char *RPN::RPNException::what() const throw()
{
	return ("Error");
}

int	RPN::doRPN(const std::string &str)
{
	int	b;
	int	a;

	if (str.empty())
		throw RPN::RPNException();
	for (size_t i = 0; i < str.size(); i++)
	{
		if (std::isspace(str[i]))
			continue;
		if (std::isdigit(str[i]))
			this->_stack.push(str[i] - '0');
		// Take negative numbers into consideration
		else if (str[i] == '-' && std::isdigit(str[i + 1]))
			this->_stack.push(-(str[++i] - '0'));
		else
		{
			if (this->_stack.size() >= 2)
			{
				b = this->_stack.top();
				this->_stack.pop();
				a = this->_stack.top();
				this->_stack.pop();
			}
			else
				throw RPN::RPNException();
			switch (str[i])
			{
				case '+':
					this->_stack.push(a + b);
					break;
				case '-':
					this->_stack.push(a - b);
					break;
				case '*':
					this->_stack.push(a * b);
					break;
				case '/':
					if (b == 0)
						throw RPN::RPNException();
					this->_stack.push(a / b);
					break;
				default:
					throw RPN::RPNException();
			}
		}
	}
	if (this->_stack.empty())
		throw RPN::RPNException();
	return this->_stack.top();
}

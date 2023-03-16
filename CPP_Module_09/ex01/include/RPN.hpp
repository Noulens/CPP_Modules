/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:50:18 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/16 14:01:35 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	private:
		std::stack<int, std::deque<int> > _stack;
	public:
		RPN();
		RPN(const RPN &copy);
		~RPN();
		RPN & operator=(const RPN &assign);
		std::stack<int> getStack() const;
		int doRPN(const std::string &str);

		class RPNException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
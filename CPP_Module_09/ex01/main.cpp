/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:59:41 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/16 14:00:58 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <string>
#include "RPN.hpp"

int	main(int argc, char **argv)
{
	RPN rpn;
	try
	{
		if (argc != 2)
			throw RPN::RPNException();
		std::cout << rpn.doRPN(argv[1]) << std::endl;
	}
	catch (const RPN::RPNException &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
    return (0);
}

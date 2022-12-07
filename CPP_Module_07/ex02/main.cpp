/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:43:15 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/07 22:23:53 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include "colors.h"

int	main( void )
{
	Array<int>			count(10);
	Array<int>			count2(10);
	Array<std::string>	str(10);

	for (int i = 0; i < 10; i++)
	{
		std::cout << YELLOW << count[i] << " " << RESET;
		std::cout << YELLOW << count2[i] << " " << RESET;
	}

	for (int i = 0; i < 10; i++)
	{
		count[i] = i + 1;
		count2[i] = 10 - i;
	}
	std::cout << std::endl;
	str[0] = "fucking templates";
	{
		try
		{
			std::cout << str[0] << std::endl;
			std::cout << str[10] << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "str vide @ idx 9:" << str[9] << std::endl;
		str[9] = "BS template";
		std::cout << "str @ idx 9:" << str[9] << std::endl;
	}
	std::cout << "count: \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << count[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "assignation of count to count2: \n";
	count = count2;
	std::cout << "count: \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << count[i] << " ";
	}
	std::cout << std::endl;
}

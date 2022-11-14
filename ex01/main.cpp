/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:28:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 11:38:18 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colors.h"

int main(int argc, char **argv)
{
	bool		is_active;
	std::string	str;
	std::string	option;

	if (argc == 2)
	{
		str = argv[1];
		if (str == "build")
		{
			/* build contact */
		}
	}	
	is_active = true;
	while(is_active)
	{
		std::cout << NEG_GREEN << "This is the phonebook >" << RESET << " ";
		std::getline(std::cin, option);
		if (option == "ADD")
		{
			/* do add */
		}
		else if (option == "SEARCH")
		{
			/* do search*/
		}
		else if (option == "EXIT")
			break ;
	}
	std::cout << "Bye !!" << std::endl;
	return (0);
}

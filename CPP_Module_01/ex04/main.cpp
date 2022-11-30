/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:54:00 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/30 19:41:15 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << YELLOW << "Enter expected input: [Filename] [string to replace] [replacing string]" << RESET << std::endl;
	else
	{
		std::string		file = argv[1];
		std::string		newfile = file + ".replace";
		std::string		substituted = argv[2];
		std::string		substituant = argv[3];
		std::ifstream	to_read;
		std::ofstream	to_write;
		std::string		buffer;
		std::size_t		sd = substituted.length();
		std::size_t		st = substituant.length();

		if (substituted.length() == 0)
		{
			std::cout << "substituted cannot be empty" << std::endl;
			return (1);
		}
		to_read.open(file.c_str());
		if (!to_read)
		{
			std::cout << "Nope, check file existence or access right !" << std::endl;
			return (2);
		}
		to_write.open(newfile.c_str());
		if (!to_write)
		{
			std::cout << ".replace not created !" << std::endl;
			to_read.close();
			return (3);
		}
		std::string::size_type pos;
		while (std::getline(to_read, buffer))
		{
			pos = buffer.find(substituted);
			while (pos != std::string::npos)
			{
				buffer.insert(pos, substituant);
				buffer.erase(pos + st, sd);
				pos = buffer.find(substituted, pos + st);
			}
			to_write << buffer << std::endl;
		}
		to_write.close();
		to_read.close();
	}
	return (0);
}

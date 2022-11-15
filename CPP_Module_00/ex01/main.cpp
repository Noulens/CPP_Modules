/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:28:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/15 19:24:00 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colors.h"
#include "Phonebook.hpp"

int main(int argc, char **argv)
{
	bool		is_active;
	std::string	str;
	std::string	option;
	Phonebook	Pb;

	if (argc == 2)
	{
		str = argv[1];
		if (str == "build")
		{
			Pb.AddContact(Contact("dude ONE", "Duder", "bob", "+123547895", "hehehe"));
			Pb.AddContact(Contact("dude TWO", "Duder", "bob", "0123547895", "hahaha"));
			Pb.AddContact(Contact("dude THREE", "Duder", "bob", "0123547895456", "hihihi"));
			Pb.AddContact(Contact("dude FOUR", "Duder the dudest", "bob", "+123547895", "huhuhu"));
			Pb.AddContact(Contact("dude FIVE", "Duder", "bob", "+123547895", "hohoho"));
			Pb.AddContact(Contact("dude SIX", "Duder", "bob", "+123547895", "hyhyhy"));
			Pb.AddContact(Contact("dude SEVEN", "Duder", "bob", "+123547895", "jajaja"));
			Pb.AddContact(Contact("dude EIGHT", "Duder", "bob", "+123547895", "jejeje"));
		}
	}	
	is_active = true;
	while(is_active)
	{
		std::cout << NEG_GREEN << "This is the phonebook >" << RESET << " ";
		std::getline(std::cin, option);
		if (std::cin.eof())
			std::exit (1);
		if (option == "ADD")
		{
			std::cout << "Add contact info" << std::endl;
			Pb.AddContact();
		}
		else if (option == "SEARCH")
		{
			Pb.DisplayAll();
			Pb.DisplayIdx();
		}
		else if (option == "EXIT")
			break ;
	}
	std::cout << "Bye !!" << std::endl;
	return (0);
}

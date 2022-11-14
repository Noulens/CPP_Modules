/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:28:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 21:54:03 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	_nbcontacts = 0;
	std::cout << "Constructeur de Phonebook appelé" << std::endl;
}

void	Phonebook::AddContact(Contact info)
{
	if (_nbcontacts == 8)
	{
		for (size_t i = 1; i < 8; i++)
		{
			_the_contacts[i - 1] = _the_contacts[i];
		}
		_nbcontacts = 7;
	}
	_the_contacts[_nbcontacts] = info;
	++_nbcontacts;
}

void	Phonebook::AddContact()
{
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	phonenb;
	std::string	drkscrt;
	Contact		infos;

	while (true)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, fname);
		if (infos.set_fname(fname) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, lname);
		if (infos.set_lname(lname) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nname);
		if (infos.set_nname(nname) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phonenb);
		if (infos.set_phonenb(phonenb) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break ;
	}
	std::cout << "Whisper darkest secret: ";
	std::getline(std::cin, drkscrt);
	infos.get_drkscrt(drkscrt);
	if (_nbcontacts == 8)
	{
		for (size_t i = 1; i < 8; i++)
		{
			_the_contacts[i - 1] = _the_contacts[i];
		}
		_nbcontacts = 7;
	}
	_the_contacts[_nbcontacts] = infos;
	++_nbcontacts;
}

void	Phonebook::DisplayAll()
{
}

void	Phonebook::DisplayIdx()
{
}

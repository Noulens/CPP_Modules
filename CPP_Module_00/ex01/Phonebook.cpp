/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:28:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/15 19:32:24 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	_nbcontacts = 0;
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
		if (std::cin.eof())
			std::exit (1);
		if (infos.set_fname(fname) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break;
	}
	while (true)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, lname);
		if (std::cin.eof())
			std::exit (1);
		if (infos.set_lname(lname) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nname);
		if (std::cin.eof())
			std::exit (1);
		if (infos.set_nname(nname) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phonenb);
		if (std::cin.eof())
			std::exit (1);
		if (infos.set_phonenb(phonenb) == false)
			std::cout << "Enter valid info please" << std::endl;
		else
			break ;
	}
	while (true)
	{
		std::cout << "Whisper their darkest secret...: ";
		std::getline(std::cin, drkscrt);
		if (std::cin.eof())
			std::exit (1);
		if (infos.set_drkscrt(drkscrt) == false)
			std::cout << "keep thinking..." << std::endl;
		else
			break ;
	}
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
	std::cout << DARK_BLUE << "------------This is The Phonebook------------" << std::endl;
	std::cout << "---------------------------------------------" << RESET << std::endl;
	if (_nbcontacts == 0)
		std::cout << "it is empty" << std::endl;
	else
	{
		for (int i = 0; i < _nbcontacts; i++)
		{
			std::cout << DARK_BLUE << "|" << RESET << std::setw(10) << i + 1
				<< DARK_BLUE << "|" << RESET << std::setw(10) << _the_contacts[i].get_fname(true)
				<< DARK_BLUE << "|" << RESET << std::setw(10) << _the_contacts[i].get_lname(true)
				<< DARK_BLUE << "|" << RESET << std::setw(10) << _the_contacts[i].get_nname(true)
				<< DARK_BLUE << "|" << RESET << std::endl;
			std::cout << DARK_BLUE << "---------------------------------------------" << RESET << std::endl;
		}
	}
}

void	Phonebook::DisplayIdx()
{
	std::string idx;
	int			id;

	if (_nbcontacts != 0)
	{
		std::cout << "Would you like to know more ?" << std::endl;
		while (true)
		{
			std::cout << UNDERLINE_BLUE << DARK_BLUE << "enter index" << RESET << DARK_BLUE << "> " << RESET;
			std::getline(std::cin, idx);
			if (std::cin.eof())
				std::exit (1);
			id = 0;
			if (idx.length() == 1)
			{
				id = idx[0] - 48;
				if (id > _nbcontacts || id <= 0 || !std::isdigit(idx[0]))
					std::cout << RED << "enter valid index : " << "between 1 and " << _nbcontacts << RESET << std::endl;
				else
					break ;
			}
			else
				std::cout << RED << "enter valid index : " << "between 1 and " << _nbcontacts << RESET << std::endl;
		}
		std::cout << _the_contacts[id - 1].get_fname(false) << std::endl;
		std::cout << _the_contacts[id - 1].get_lname(false) << std::endl;
		std::cout << _the_contacts[id - 1].get_nname(false) << std::endl;
		std::cout << _the_contacts[id - 1].get_phonenb(false) << std::endl;
		std::cout << _the_contacts[id - 1].get_drkscrt(false) << std::endl;
	}
}

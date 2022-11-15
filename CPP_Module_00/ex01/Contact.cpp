/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:36:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/15 19:30:31 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_fname = "";
	_lname = "";
	_nname = "";
	_phonenb = "";
	_darkest_secret = "";
}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string phonenb, std::string darkest_secret)
{
	_fname = fname;
	_lname = lname;
	_nname = nname;
	_phonenb = phonenb;
	_darkest_secret = darkest_secret;	
}

bool	Contact::set_fname(std::string fname)
{
	if (fname.length() == 0)
		return (false);
	for (size_t i = 0; i < fname.length(); i++)
	{
		if (!std::isalpha(fname[i]) && fname[i] != '-' && fname[i] != ' ')
			return (false);
	}
	_fname = fname;
	return (true);
}

bool	Contact::set_lname(std::string lname)
{
	if (lname.length() == 0)
		return (false);
	for (size_t i = 0; i < lname.length(); i++)
	{
		if (!std::isalpha(lname[i]) && lname[i] != '-' && lname[i] != ' ')
			return (false);
	}
	_lname = lname;
	return (true);
}

bool	Contact::set_nname(std::string nname)
{
	if (nname.length() == 0)
		return (false);
	for (size_t i = 0; i < nname.length(); i++)
	{
		if (!std::isalpha(nname[i]) && nname[i] != '-' && nname[i] != ' ')
			return (false);
	}
	_nname = nname;
	return (true);
}

bool	Contact::set_phonenb(std::string phonenb)
{
	size_t	i;

	i = 0;
	if (phonenb.length() == 0)
		return (false);
	if (std::isdigit(phonenb[i]) || phonenb[i] == '+')
		++i;
	else
		return (false);
	for (i = 1; i < phonenb.length(); i++)
	{
		if (!std::isdigit(phonenb[i]))
			return (false);
	}
	_phonenb = phonenb;
	return (true);
}

bool	Contact::set_drkscrt(std::string darkest_secret)
{
	if (darkest_secret.length() == 0)
		return (false);
	_darkest_secret = darkest_secret;
	return (true);
}

std::string	Contact::get_fname(bool shortest) const
{
	std::string shorter = _fname;
	if (shortest == true && _fname.length() > 10)
	{
		shorter.resize(9);
		shorter.append(".");
	}
	return (shorter);
}

std::string	Contact::get_lname(bool shortest) const
{
	std::string shorter = _lname;
	if (shortest == true && _lname.length() > 10)
	{
		shorter.resize(9);
		shorter.append(".");
	}
	return (shorter);	
}

std::string	Contact::get_nname(bool shortest) const
{
	std::string shorter = _nname;
	if (shortest == true && _nname.length() > 10)
	{
		shorter.resize(9);
		shorter.append(".");
	}
	return (shorter);	
}

std::string	Contact::get_phonenb(bool shortest) const
{
	std::string shorter = _phonenb;
	if (shortest == true && _phonenb.length() > 10)
	{
		shorter.resize(9);
		shorter.append(".");
	}
	return (shorter);	
}

std::string	Contact::get_drkscrt(bool shortest) const
{
	std::string shorter = _darkest_secret;
	if (shortest == true && _darkest_secret.length() > 10)
	{
		shorter.resize(9);
		shorter.append(".");
	}
	return (shorter);	
}

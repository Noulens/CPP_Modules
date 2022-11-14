/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:36:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 19:52:22 by waxxy            ###   ########.fr       */
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
	if (fname[0] == '\0')
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
	if (lname[0] == '\0')
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
	if (nname[0] == '\0')
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
	if (phonenb[i] == '\0')
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
	if (darkest_secret[0] == '\0')
		return (false);
	_darkest_secret = darkest_secret;
	return (true);
}

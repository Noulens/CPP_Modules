/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:28:36 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 20:44:40 by waxxy            ###   ########.fr       */
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

void	Phonebook::DisplayAll()
{
    
}

void	Phonebook::DisplayIdx()
{
    
}

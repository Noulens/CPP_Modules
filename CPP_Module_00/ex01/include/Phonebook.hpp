/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:30:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/15 14:16:20 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__H__
# define __PHONEBOOK__H__

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"
# include "colors.h"

class Phonebook
{
	private:
		int		_nbcontacts;
		Contact	_the_contacts[8];
	public:
		Phonebook();

		void	AddContact();
		void	AddContact(Contact info);
		void	DisplayAll();
		void	DisplayIdx();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:30:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 20:44:50 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__H__
# define __PHONEBOOK__H__

# include <iostream>
# include "Contact.hpp"

class Phonebook
{
	private:
		int		_nbcontacts;
		Contact	_the_contacts[8];
	public:
		Phonebook();
		~Phonebook();

		void	AddContact();
		void	AddContact(Contact info);
		void	DisplayAll();
		void	DisplayIdx();
}

#endif

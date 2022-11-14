/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:30:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 12:51:18 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__H__
# define __PHONEBOOK__H__

# include <iostream>

class Phonebook
{
	private:
		int		_nbcontacts;
		Contact	_the_contacts[8];
	public:
		Phonebook();
		~Phonebook();

		bool	AddContact();
		void	DisplayAll();
		void	DisplayIdx();
}

#endif

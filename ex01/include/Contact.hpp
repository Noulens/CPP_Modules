/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:30:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 12:40:57 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT__H__
# define __CONTACT__H__

# include <iostream>

class Contact
{
    private:
 		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_phonenb;
		std::string	_darkest_secret;   
    public:
        Contact();
		~Contact();
}

#endif

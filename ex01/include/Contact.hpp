/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:30:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/15 15:33:10 by tnoulens         ###   ########.fr       */
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
		Contact(std::string fname, std::string lname, std::string nname, std::string phonenb, std::string darkest_secret);
		
		bool		set_fname(std::string fname);
		bool		set_lname(std::string lname);
		bool		set_nname(std::string nname);
		bool		set_phonenb(std::string phonenb);
		bool		set_drkscrt(std::string darkest_secret);

		std::string	get_fname(bool shortest) const;
		std::string	get_lname(bool shortest) const;
		std::string	get_nname(bool shortest) const;
		std::string	get_phonenb(bool shortest) const;
		std::string	get_drkscrt(bool shortest) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:30:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/14 19:47:46 by waxxy            ###   ########.fr       */
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
		~Contact();
		
		bool		set_fname(std::string fname);
		bool		set_lname(std::string lname);
		bool		set_nname(std::string nname);
		bool		set_phonenb(std::string phonenb);
		bool		set_drkscrt(std::string darkest_secret);

		std::string	get_fname(std::string fname);
		std::string	get_lname(std::string lname);
		std::string	get_nname(std::string nname);
		std::string	get_phonenb(std::string phonenb);
		std::string	get_drkscrt(std::string darkest_secret);		
};

#endif

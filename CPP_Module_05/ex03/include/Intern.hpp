/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:01:37 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 16:36:07 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN__HPP__
# define __INTERN__HPP__

# include "colors.h"
# include <iostream>
# include <string>
# include "Form.hpp"
#include "ShrebberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class	Intern
{
	private:
		std::string	_formlib[3];
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern	&operator = (const Intern &assign);
		
		Form	*makeForm(const std::string nof, const std::string target);

		/* exception no such form */
		class	NoSuchForm: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif

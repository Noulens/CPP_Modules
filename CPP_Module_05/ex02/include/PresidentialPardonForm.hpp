/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:37:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 15:38:23 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM__HPP__
# define __PRESIDENTIALPARDONFORM__HPP__

#include "colors.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class	PresidentialPardonForm: public Form
{
	private:
		const std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator = (const PresidentialPardonForm &assign);

		const std::string	getTarget() const;
		void				form_exec(const Bureaucrat &executor) const;
};

#endif

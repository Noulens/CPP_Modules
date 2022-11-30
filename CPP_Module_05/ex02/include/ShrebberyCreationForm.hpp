/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrebberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:30:47 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 20:12:19 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHREBBERYCREATIONFORM__HPP__
# define __SHREBBERYCREATIONFORM__HPP__

#include "colors.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class	ShrebberyCreationForm: public Form
{
	private:
		const std::string	_target;
	public:
		ShrebberyCreationForm();
		ShrebberyCreationForm(const std::string &target);
		~ShrebberyCreationForm();
		ShrebberyCreationForm(const ShrebberyCreationForm &copy);
		ShrebberyCreationForm &operator = (const ShrebberyCreationForm &assign);

		const std::string	getTarget() const;
		void				execute(const Bureaucrat &executor) const;
};

#endif

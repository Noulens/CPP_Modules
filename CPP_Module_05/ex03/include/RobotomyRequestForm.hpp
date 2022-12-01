/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:43:05 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 15:44:19 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM__HPP__
# define __ROBOTOMYREQUESTFORM__HPP__

#include "colors.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class	RobotomyRequestForm: public Form
{
	private:
		const std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator = (const RobotomyRequestForm &assign);

		const std::string	getTarget() const;
		void				form_exec(const Bureaucrat &executor) const;
};

#endif

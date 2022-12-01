/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:26:06 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 15:56:21 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "colors.h"
#include <iostream>
#include <string>
#include "ShrebberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	// Form test1 = Form();
	std::cout << DARK_YELLOW << "------ Create JMB ------" << RESET << std::endl;
	Bureaucrat a(5, BLUE "Jean-Michel Jambon" RESET);
	std::cout << a << "\n";
	std::cout << DARK_YELLOW << "------ Create Dédé ------" << RESET << std::endl;
	Bureaucrat b(150, YELLOW "Dédé" RESET);
	std::cout << b << "\n";
	std::cout << DARK_YELLOW << "------ Execute ------" << RESET << std::endl;
	ShrebberyCreationForm SCF = ShrebberyCreationForm("tester");
	PresidentialPardonForm PPF = PresidentialPardonForm("tester2");
	RobotomyRequestForm RRF = RobotomyRequestForm("tester3");
	std::cout << DARK_BLUE << "--- Fail grade ---" << RESET << std::endl;
	// test.form_exec(b);
	b.executeForm(SCF);
	b.executeForm(PPF);
	b.executeForm(RRF);
	std::cout << DARK_BLUE << "--- Fail not sign ---" << RESET << std::endl;
	// test.form_exec(a);
	a.executeForm(SCF);
	a.executeForm(PPF);
	a.executeForm(RRF);
	std::cout << DARK_YELLOW << "------ Sign ------" << RESET << std::endl;
	SCF.beSigned(b);
	SCF.beSigned(a);
	RRF.beSigned(b);
	RRF.beSigned(a);
	PPF.beSigned(b);
	PPF.beSigned(a);
	std::cout << SCF << '\n';
	std::cout << DARK_YELLOW << "------ Execute again ------" << RESET << std::endl;
	// test.form_exec(a);
	a.executeForm(SCF);
	a.executeForm(PPF);
	a.executeForm(RRF);
	std::cout << DARK_YELLOW << "------ It's 4pm, Offices are closed ------" << RESET << std::endl;
	return (0);
}

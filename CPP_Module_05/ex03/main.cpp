/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:26:06 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 20:10:14 by tnoulens         ###   ########.fr       */
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
#include "Intern.hpp"

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
	std::cout << DARK_BLUE << "--- Intern create forms ---" << RESET << std::endl;
	Intern	me;
	Form *SCF;
	Form *PPF;
	Form *RRF;
	Form *NSF;
	try
	{
		SCF = me.makeForm("ShrebberyCreationForm", "target1");
		PPF = me.makeForm("PresidentialPardonForm", "target2");
		RRF = me.makeForm("RobotomyRequestForm", "target3");
		NSF = me.makeForm("yo", "yop");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << DARK_BLUE << "--- Fail grade ---" << RESET << std::endl;
	// test.form_exec(b);
	b.executeForm(*SCF);
	b.executeForm(*PPF);
	b.executeForm(*RRF);
	std::cout << DARK_BLUE << "--- Fail not sign ---" << RESET << std::endl;
	// test.form_exec(a);
	a.executeForm(*SCF);
	a.executeForm(*PPF);
	a.executeForm(*RRF);
	std::cout << DARK_YELLOW << "------ Sign ------" << RESET << std::endl;
	SCF->beSigned(b);
	SCF->beSigned(a);
	RRF->beSigned(b);
	RRF->beSigned(a);
	PPF->beSigned(b);
	PPF->beSigned(a);
	std::cout << *SCF << '\n';
	std::cout << DARK_YELLOW << "------ Execute again ------" << RESET << std::endl;
	// test.form_exec(a);
	a.executeForm(*SCF);
	a.executeForm(*PPF);
	a.executeForm(*RRF);
	std::cout << DARK_YELLOW << "------ It's 4pm, Offices are closed ------" << RESET << std::endl;
	delete SCF;
	delete RRF;
	delete PPF;
	return (0);
}

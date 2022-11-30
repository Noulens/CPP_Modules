/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:26:06 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 21:27:44 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "colors.h"
#include <iostream>
#include <string>
#include "ShrebberyCreationForm.hpp"

int	main(void)
{
	// Form test1 = Form();
	std::cout << DARK_YELLOW << "------ Create JMB ------" << RESET << std::endl;
	Bureaucrat a(137, BLUE "Jean-Michel Jambon" RESET);
	std::cout << a << "\n";
	std::cout << DARK_YELLOW << "------ Create Dédé ------" << RESET << std::endl;
	Bureaucrat b(150, YELLOW "Dédé" RESET);
	std::cout << b << "\n";
	std::cout << DARK_YELLOW << "------ Execute ------" << RESET << std::endl;
	ShrebberyCreationForm test = ShrebberyCreationForm("tester");
	std::cout << DARK_BLUE << "--- Fail grade ---" << RESET << std::endl;
	try
	{
		test.execute(b);
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << DARK_BLUE << "--- Fail not sign ---" << RESET << std::endl;
	try
	{
		test.execute(a);
	}
	catch(const Form::FormNotSign &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << DARK_YELLOW << "------ Sign ------" << RESET << std::endl;
	try
	{
		test.beSigned(b);
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
	}
	try
	{
		test.beSigned(a);
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << DARK_YELLOW << "------ Execute again ------" << RESET << std::endl;
	try
	{
		test.execute(a);
	}
	catch(const Form::FormNotSign &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << DARK_YELLOW << "------ It's 4pm, Offices are closed ------" << RESET << std::endl;
	return (0);
}

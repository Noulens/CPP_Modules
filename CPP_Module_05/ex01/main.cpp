/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:26:06 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 17:57:34 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "colors.h"
#include <iostream>
#include <string>

int	main(void)
{
	std::cout << DARK_YELLOW << "------ Create JMB ------" << RESET << std::endl;
	Bureaucrat a(20, BLUE "Jean-Michel Jambon" RESET);
	std::cout << a << "\n";
	std::cout << DARK_YELLOW << "------ Create Dédé ------" << RESET << std::endl;
	Bureaucrat b(150, YELLOW "Dédé" RESET);
	std::cout << b << "\n";
	std::cout << DARK_YELLOW << "------ Create Form std a38 ------" << RESET << std::endl;
	Form a38 = Form();
	std::cout << a38 << "\n";
	std::cout << DARK_YELLOW << "------ Create Form t sign 12 and exec 20 ------" << RESET << std::endl;
	Form t("Impot 12 20", 12, 20);
	std::cout << t << "\n";
	std::cout << DARK_YELLOW << "------ Create Form i sign 20 and exec 2 ------" << RESET << std::endl;
	Form i("Impot 20 2", 20, 2);
	std::cout << i << "\n";
	std::cout << "\n";
	std::cout << DARK_YELLOW << "------ Task Dédé ------" << RESET << std::endl;
	try
	{
		a38.beSigned(b);		
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << a38 << '\n';
	std::cout << DARK_YELLOW << "------ Task JMB ------" << RESET << std::endl;
	std::cout << DARK_BLUE << "--- Fail ---" << RESET << std::endl;
	try
	{
		t.beSigned(a);
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << DARK_BLUE << "--- Success ---" << RESET << std::endl;
	try
	{
		i.beSigned(a);
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
	}
	std::cout << i << '\n';
	std::cout << DARK_YELLOW << "------ It's 4pm, Offices are closed ------" << RESET << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:26:06 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 15:27:25 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colors.h"
#include <iostream>
#include <string>

int	main(void)
{
	std::cout << DARK_YELLOW << "------ try create lvl 152 ------" << RESET << std::endl;
	try
	{
		Bureaucrat b(152, "bob");
		std::cout << b;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << DARK_YELLOW << "------ try create lvl -3 ------" << RESET << std::endl;
	try
	{
		Bureaucrat b(-3, "bob");
		std::cout << b;
	}
	catch(const std::exception &f)
	{
		std::cout << f.what() << '\n';
	}
	std::cout << DARK_YELLOW << "------ try create lvl 0 ------" << RESET << std::endl;
	try
	{
		Bureaucrat b(0, "bob");
		std::cout << b;
	}
	catch(const std::exception &g)
	{
		std::cout << g.what() << '\n';
	}
	std::cout << DARK_YELLOW << "------ try to promote then over-demote ------" << RESET << std::endl;
	try
	{
		Bureaucrat b(150, BLUE "bob" RESET);
		std::cout << b << '\n';
		b.promote();
		std::cout << b << '\n';
		b.demote();
		b.demote();
	}
	catch(const std::exception &g)
	{
		std::cout << g.what() << '\n';
	}
	std::cout << DARK_YELLOW << "------ try to demote then over-promote ------" << RESET << std::endl;
	try
	{
		Bureaucrat c(1, YELLOW "Dudley" RESET);
		std::cout << c << '\n';
		c.demote();
		std::cout << c << '\n';
		c.promote();
		c.promote();
	}
	catch(const std::exception &g)
	{
		std::cout << g.what() << '\n';
	}
	std::cout << DARK_YELLOW << "------ try std constructor ------" << RESET << std::endl;
	Bureaucrat f = Bureaucrat();
	std::cout << f << '\n';
	return (0);
}

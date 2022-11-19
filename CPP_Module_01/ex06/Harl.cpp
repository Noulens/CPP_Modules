/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:44:17 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/19 19:42:16 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	_levels[0].level = "DEBUG";
	_levels[1].level = "INFO";
	_levels[2].level = "WARNING";
	_levels[3].level = "ERROR";
	_levels[0].func = &Harl::debug;
	_levels[1].func = &Harl::info;
	_levels[2].func = &Harl::warning;
	_levels[3].func = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << NEG_RED << "DEBUG MESSAGE !!!" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << NEG_RED << "INFO MESSAGE !!!" << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << NEG_RED << "WARNING MESSAGE !!!" << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << NEG_RED << "ERROR MESSAGE !!!" << RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; ++i)
	{
		if(level == _levels[i].level)
		{
			(this->*_levels[i].func)();
			return ;
		}
	}
	std::cout << "Je n'ai pas bien saisi tout le sens de votre requête" << std::endl;
}

int	Harl::filter(std::string filter)
{
	for (int i = 0; i < 4; ++i)
	{
		if (filter == _levels[i].level)
			return (i);
	}
	return (-1);
}

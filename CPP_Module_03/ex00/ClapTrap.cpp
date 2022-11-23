/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:32:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/23 20:34:17 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap: Name Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap: Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &assign)
{
	std::cout << "ClapTrap: Assignment Operator called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << BLUE << "CT " << _name << " attacks " << target << " dealing " << _attackdamage << "!" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << "CT " << _name << " takes " << amount << " damages!" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN << "CT " << _name << " repaired " << amount << " points!" << RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:32:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/23 20:45:22 by tnoulens         ###   ########.fr       */
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
	_attackdamage = assign._attackdamage;
	_hitpoints = assign._hitpoints;
	_energypoints = assign._energypoints;
	_name = assign._name;
	std::cout << "ClapTrap: Assignment Operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "CT " << this->_name << " has no more energy left..." << RESET << std::endl;
		return ;
	}
	this->_energypoints--;
	std::cout << BLUE << "CT " << this->_name << " attacks " << target << " dealing " << this->_attackdamage << "!" << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "CT " << this->_name " is already HS!" << RESET << std::
	}
	std::cout << RED << "CT " << _name << " takes " << amount << " damages!" << RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN << "CT " << _name << " repaired " << amount << " points!" << RESET << std::endl;
}

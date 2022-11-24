/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:23:52 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 17:36:17 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "colors.h"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << DARK_WHITE << "ScavTrap: Name Constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy_from)
{
	this->_hitpoints = copy_from._hitpoints;
	this->_energypoints = copy_from._energypoints;
	this->_attackdamage = copy_from._attackdamage;
	std::cout << DARK_WHITE << "ScavTrap: Copy Constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << DARK_WHITE << "ScavTrap: Destructor called" << RESET << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << PURPLE << "ST " << this->_name << " is now in gate keeper mode." << RESET << std::endl;
}
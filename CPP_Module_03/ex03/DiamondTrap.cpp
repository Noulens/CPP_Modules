/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:26:56 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:27:15 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name)
{
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitpoints = FragTrap::_hitpoints;
	this->_energypoints = ScavTrap::_energypoints;
	this->_attackdamage = FragTrap::_attackdamage;
	std::cout << DARK_WHITE << "DiamondTrap: Name Constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy_from)
{
	this->_hitpoints = copy_from._hitpoints;
	this->_energypoints = copy_from._energypoints;
	this->_attackdamage = copy_from._attackdamage;
	std::cout << DARK_WHITE << "DiamondTrap: Copy Constructor called" << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << DARK_WHITE << "DiamondTrap: Destructor called" << RESET << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << PURPLE << "I suppose i am both DiamondTrap " << this->_name << " and ClapTrap " << ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
    this->_hitpoints = src._hitpoints;
	this->_energypoints = src._energypoints;
	this->_attackdamage = src._attackdamage;
	this->_name = src._name;
    	std::cout << "DiamondTrap: Assignment Operator called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

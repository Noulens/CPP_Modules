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
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
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

void	DiamondTrap::highFivesGuys(void)
{
	std::cout << PURPLE << "" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "DT " << this->_name << " tries to attack but has no more energy left..." << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "DT " << this->_name << " attacks " << target << " dealing " << this->_attackdamage << "!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "DT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_RED << "DT " << this->_name << " no damage taken!!" << RESET << std::endl;
		return ;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "DT " << this->_name << " is already HS!" << RESET << std::endl;
		return ;
	}
	std::cout << RED << "DT " << _name << " takes " << amount << " damages!" << RESET << std::endl;
	(_hitpoints < (int)amount) ? _hitpoints = 0 : _hitpoints -= amount;
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "DT " << this->_name << " is now HS!" << RESET << std::endl;
	}
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_GREEN << "DT " << this->_name << " no damage repaired!!" << RESET << std::endl;
		return ;
	}
	if (_hitpoints == 100)
	{
		std::cout << DARK_GREEN << "DT " << this->_name << " is already at full health" << RESET << std::endl;
		return ;
	}
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "DT " << this->_name << " tries to auto-repair but has no more energy left..." << RESET << std::endl;
		return ;
	}
	(_hitpoints + amount > 100) ? _hitpoints = 100 : _hitpoints += amount;
	std::cout << GREEN << "DT " << _name << " repaired " << amount << " points!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "DT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

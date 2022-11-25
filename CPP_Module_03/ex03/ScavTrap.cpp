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

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	this->_hp = src._hp;
	this->_mp = src._mp;
	this->_dmg = src._dmg;
	this->_name = src._name;
    std::cout << "ScavTrap: Assignment Operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "ST " << this->_name << " tries to attack but has no more energy left..." << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "ST " << this->_name << " attacks " << target << " dealing " << this->_attackdamage << "!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "ST " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_RED << "ST " << this->_name << " no damage taken!!" << RESET << std::endl;
		return ;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "ST " << this->_name << " is already HS!" << RESET << std::endl;
		return ;
	}
	std::cout << RED << "ST " << _name << " takes " << amount << " damages!" << RESET << std::endl;
	(_hitpoints < (int)amount) ? _hitpoints = 0 : _hitpoints -= amount;
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "ST " << this->_name << " is now HS!" << RESET << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_GREEN << "ST " << this->_name << " no damage repaired!!" << RESET << std::endl;
		return ;
	}
	if (_hitpoints == 100)
	{
		std::cout << DARK_GREEN << "ST " << this->_name << " is already at full health" << RESET << std::endl;
		return ;
	}
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "ST " << this->_name << " tries to auto-repair but has no more energy left..." << RESET << std::endl;
		return ;
	}
	(_hitpoints + amount > 100) ? _hitpoints = 100 : _hitpoints += amount;
	std::cout << GREEN << "ST " << _name << " repaired " << amount << " points!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "ST " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

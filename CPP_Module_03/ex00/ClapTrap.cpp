/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:32:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 13:27:51 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default name"), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap: Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap: Name Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_attackdamage = copy._attackdamage;
	_hitpoints = copy._hitpoints;
	_energypoints = copy._energypoints;
	_name = copy._name;
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
	if (this->_energypoints == 0 || this->_hitpoints == 0)
	{
		std::cout << DARK_YELLOW << "CT " << this->_name << " tries to attack but cannot do anything..." << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "CT " << this->_name << " attacks " << target << " dealing " << this->_attackdamage << "!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "CT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_RED << "CT " << this->_name << " no damage taken!!" << RESET << std::endl;
		return ;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "CT " << this->_name << " is already HS!" << RESET << std::endl;
		return ;
	}
	std::cout << RED << "CT " << _name << " takes " << amount << " damages!" << RESET << std::endl;
	(_hitpoints < (int)amount) ? _hitpoints = 0 : _hitpoints -= amount;
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "CT " << this->_name << " is now HS!" << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_GREEN << "CT " << this->_name << " no damage repaired!!" << RESET << std::endl;
		return ;
	}
	if (this->_energypoints == 0 || this->_hitpoints == 0)
	{
		std::cout << DARK_YELLOW << "CT " << this->_name << " tries to repair but cannot do anything..." << RESET << std::endl;
		return ;
	}
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "CT " << this->_name << " tries to auto-repair but has no more energy left..." << RESET << std::endl;
		return ;
	}
	_hitpoints += amount;
	std::cout << GREEN << "CT " << _name << " repaired " << amount << " points!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "CT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

std::string const &	ClapTrap::getName() const
{
	return (this->_name);
}

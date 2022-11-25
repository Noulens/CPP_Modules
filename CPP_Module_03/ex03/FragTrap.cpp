/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:52:11 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:19:04 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackdamage = 30;
	std::cout << DARK_WHITE << "FragTrap: Name Constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy_from)
{
	this->_hitpoints = copy_from._hitpoints;
	this->_energypoints = copy_from._energypoints;
	this->_attackdamage = copy_from._attackdamage;
	std::cout << DARK_WHITE << "FragTrap: Copy Constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << DARK_WHITE << "FragTrap: Destructor called" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	_attackdamage = src._attackdamage;
	_hitpoints = src._hitpoints;
	_energypoints = src._energypoints;
	_name = src._name;
	std::cout << "FragTrap: Assignment Operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << PURPLE << "positive high fives request on the standard output!!!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "FT " << this->_name << " tries to attack but has no more energy left..." << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "FT " << this->_name << " attacks " << target << " dealing " << this->_attackdamage << "!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "FT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_RED << "FT " << this->_name << " no damage taken!!" << RESET << std::endl;
		return ;
	}
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "FT " << this->_name << " is already HS!" << RESET << std::endl;
		return ;
	}
	std::cout << RED << "FT " << _name << " takes " << amount << " damages!" << RESET << std::endl;
	(_hitpoints < (int)amount) ? _hitpoints = 0 : _hitpoints -= amount;
	if (this->_hitpoints == 0)
	{
		std::cout << DARK_RED << "FT " << this->_name << " is now HS!" << RESET << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << UNDERLINE_GREEN << "FT " << this->_name << " no damage repaired!!" << RESET << std::endl;
		return ;
	}
	if (_hitpoints == 100)
	{
		std::cout << DARK_GREEN << "FT " << this->_name << " is already at full health" << RESET << std::endl;
		return ;
	}
	if (this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "FT " << this->_name << " tries to auto-repair but has no more energy left..." << RESET << std::endl;
		return ;
	}
	(_hitpoints + amount > 100) ? _hitpoints = 100 : _hitpoints += amount;
	std::cout << GREEN << "FT " << _name << " repaired " << amount << " points!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "FT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

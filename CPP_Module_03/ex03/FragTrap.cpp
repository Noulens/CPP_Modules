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

FragTrap::FragTrap(void)
{
	 _name = "Default name";
	 _hitpoints = 100;
	 _energypoints = 100;
	 _attackdamage = 30;
	std::cout << "FragTrap: Default Constructor called" << std::endl;
}

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
	if (this->_energypoints == 0 || this->_hitpoints == 0)
	{
		std::cout << DARK_YELLOW << "FT " << this->_name << " tries to attack but cannot do anything..." << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "FT " << this->_name << " attacks " << target << " dealing " << this->_attackdamage << "!" << RESET << std::endl;
	if (--this->_energypoints == 0)
	{
		std::cout << DARK_YELLOW << "FT " << this->_name << " has now no energy left..." << RESET << std::endl;
	}
}

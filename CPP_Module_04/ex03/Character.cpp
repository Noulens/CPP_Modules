/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:40:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 15:20:04 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "colors.h"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

Character::Character() : _name("Default"), _equipped(0)
{
	std::cout << "Character : default constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string &name) : _name(name), _equipped(0)
{
	std::cout << "Character : parameterized constructor called\n";
	for (int i = 0; i < 4; i++)
	this->_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character : destructor called\n";
	for (int i = 0; i < this->_equipped; ++i)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

Character	&Character::operator =  (const Character &assign)
{
	int	biggest;

	std::cout << "Character : assignment called\n";
	this->_name = assign.getName();
	biggest = (assign._equipped >= this->_equipped) ? assign._equipped : this->_equipped;
	for (int i = 0; i < biggest; ++i)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (assign._inventory[i] != NULL)
			this->_inventory[i] = assign._inventory[i]->clone();
	}
	this->_equipped = assign._equipped;
	return (*this);
}

Character::Character(const Character &copy)
{
	std::cout << "Character : copy constructor called\n";
	this->_name = copy.getName();
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < copy._equipped; ++i)
	{
		if (copy._inventory[i] != NULL)
		{
			this->_inventory[i] = copy._inventory[i]->clone();
			this->_equipped++;
		}
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_equipped == 4)
		{
			std::cout << "Inventory full\n";
		}
	else
	{
		this->_inventory[this->_equipped] = m;
		++this->_equipped;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= this->_equipped - 1 && this->_inventory[idx] != NULL)
	{
		this->_inventory[idx] = NULL;
		--this->_equipped;
	}
	else
	{
		std::cout << "Nothing equipped here\n";
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= this->_equipped - 1)
	{
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
		else
			std::cout << "not a Materia in emplacement\n";
	}
	else
	{
		std::cout << "Nothing to use here\n";
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:47:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 23:18:48 by tnoulens         ###   ########.fr       */
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

MateriaSource::MateriaSource(): _learned(0)
{
	std::cout << "MateriaSource: default constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_template[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: destructor called\n";
	for (int i = 0; i < this->_learned; ++i)
	{
		if (this->_template[i] != NULL)
			delete this->_template[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource : copy constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_template[i] = NULL;
	for (int i = 0; i < copy._learned; ++i)
	{
		if (copy._template[i] != NULL)
		{
			this->_template[i] = assign._template[i]->clone();
			this->_learned++;
		}
	}
	retrurn (*this);
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &assign)
{
	int	biggest;
	std::cout << "MateriaSource: assignment called\n";

	biggest = (assign._learned >= this->_learned) ? assign._learned : this->_learned;
	for (int i = 0; i < biggest; ++i)
	{
		if (this->_template[i] != NULL)
		{
			delete this->_template[i];
			this->_template[i] = NULL;
		}
		if (assign._template[i] != NULL)
			this->_template[i] = assign._template[i]->clone();
	}
	this->_learned = assign._learned;
	return (*this);	
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_learned >= 4)
	{
		std::cout << "MaterialSource: Cannot learn more template\n";
	}
	else
	{
		this->_template[this->_learned] = m;
		++this->_learned;
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_learned; ++i)
	{
		if (this->_template[i]->getType() == type)
			return (this->_template[i]->clone());
	}
	return (NULL);
}

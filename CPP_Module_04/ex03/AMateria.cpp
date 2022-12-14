/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:24:56 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 10:32:19 by waxxy            ###   ########.fr       */
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

AMateria::AMateria()
{
	std::cout << "AMateria : standard conctructor called\n";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria : parameterized conctructor called\n";
	this->_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria : destructor called\n";
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "AMateria : copy constructor called\n";
	*this = copy;
}

AMateria &AMateria::operator = (const AMateria &assign)
{
	std::cout << "AMateria : assignment operator called\n";
	this->_type = assign.getType();
	return (*this);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "The concept of the materia don't do anything\n";
	return ;
}

std::string	const &AMateria::getType() const
{
	return (this->_type);
}

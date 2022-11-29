/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:09:47 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 10:40:55 by waxxy            ###   ########.fr       */
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

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice : standard conctructor called\n";
}

Ice::~Ice()
{
	std::cout << "Ice : destructor called\n";
}

Ice::Ice(const Ice &copy): AMateria("ice")
{
	std::cout << "Ice : copy constructor called\n";
	*this = copy;
}

Ice &Ice::operator = (const Ice &copy)
{
	std::cout << "Ice : assignment called\n";
	this->_type = copy.getType();
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "Ice : * shoots an ice bolt at " << target.getName() << std::endl;
}


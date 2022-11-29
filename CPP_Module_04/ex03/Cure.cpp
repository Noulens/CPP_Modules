/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:09:23 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 10:40:37 by waxxy            ###   ########.fr       */
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

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure : standard conctructor called\n";
}

Cure::~Cure()
{
	std::cout << "Cure : destructor called\n";
}

Cure::Cure(const Cure &copy): AMateria("cure")
{
	std::cout << "Cure : copy constructor called\n";
	*this = copy;
}

Cure &Cure::operator = (const Cure &copy)
{
	std::cout << "Cure : assignment called\n";
	this->_type = copy.getType();
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "Cure : * heals " << target.getName() << "'s wounds *\n";
}

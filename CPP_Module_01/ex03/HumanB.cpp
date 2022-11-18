/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:45 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/18 12:44:39 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "colors.h"

HumanB::HumanB()
{
	_name = "";
	_weapon = NULL;
}

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	if (_weapon == NULL)
		std::cout << RED << _name << " attacks with their bare hands" << " !" << RESET << std::endl;
	else
		std::cout << RED << _name << " attacks with their " << _weapon->getType() << " !" << RESET << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:45 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/17 09:08:55 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "colors.h"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name, std::string weapon)
{
    _name = name;
    _weapon = weapon;
}

HumanB::~HumanB()
{
}

void    HumanB::attack() const
{
    std::cout << RED <<_name << "attacks with their " << _weapon << " !" << RESET << std::endl;
}

void    HumanB::setWeapon(std::string weapon)
{
    if (weapon.length() == 0)
        weapon = "bare hands";
}

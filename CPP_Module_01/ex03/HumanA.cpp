/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:42 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/17 09:14:25 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "colors.h"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, std::string weapon)
{
    _name = name;
}

HumanA::~HumanA()
{
}

void    HumanA::attack() const
{
    std::cout << RED <<_name << "attacks with their " << _Weapon.getType() << " !" << RESET << std::endl;
}

void    HumanA::setWeapon(std::string &type)
{
    if (type.length() == 0)
        type = "bare hands";
}

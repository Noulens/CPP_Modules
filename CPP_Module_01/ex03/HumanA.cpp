/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:42 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/17 10:04:52 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "colors.h"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon weapon)
{
    _name = name;
    _weapon = weapon;
}

HumanA::~HumanA()
{
}

void    HumanA::attack() const
{
    std::cout << RED <<_name << "attacks with their " << _weapon.getType() << " !" << RESET << std::endl;
}

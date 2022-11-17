/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:50 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/17 09:56:53 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "colors.h"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	if (type.length() == 0)
		_type = "bare hands";
}

std::string	Weapon::getType() const
{
	return (_type);
}

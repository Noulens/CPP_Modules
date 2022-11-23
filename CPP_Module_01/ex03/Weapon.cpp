/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:50 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/23 21:34:42 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "colors.h"

Weapon::Weapon()
{
	_type = "bare hands";
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
	if (type == "")
		_type = "bare hands like a man";
	else
		_type = type;
}

std::string	const &Weapon::getType() const
{
	return (_type);
}

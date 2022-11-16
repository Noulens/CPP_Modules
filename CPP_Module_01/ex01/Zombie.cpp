/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:30:16 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 17:24:28 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_zname = "";
}

Zombie::~Zombie()
{
	std::cout << _zname << ": Zombie destroyed !" << std::endl;
}

Zombie::Zombie(std::string zname)
{
	_zname = zname;
}

void	Zombie::set_name(std::string zname)
{
	_zname = zname;
}

void	Zombie::annonce()
{
	std::cout << RED << _zname << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:26:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:25:55 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	DiamondTrap	Didi("didi");
	DiamondTrap	Diams("diams");
	std::string	target_practice;

	Didi.whoAmI();
	Diams.whoAmI();
	for (int i = 0; i < 50; ++i)
		Diams.attack(Didi.getName());
	Didi.takeDamage(-30);
	Didi.guardGate();
	Didi.highFivesGuys();
	return (0);
}

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
	FragTrap	Fragger1("Fragger1");
	FragTrap	Fragger2("Fragger2");
	DiamondTrap	Didi("didi");
	DiamondTrap	Diams("diams");
	std::string	target_practice;

	Fragger1.attack(target_practice);
	Fragger1.attack(Fragger2.getName());
	Fragger2.takeDamage(30);
	Fragger1.attack(Fragger2.getName());
	Fragger2.takeDamage(30);
	Fragger1.attack(Fragger2.getName());
	Fragger2.takeDamage(30);
	Fragger1.attack(Fragger2.getName());
	Fragger2.takeDamage(30);
	Fragger1.attack(Fragger2.getName());
	Fragger2.takeDamage(30);
	Fragger1.attack(Fragger2.getName());
	Fragger2.takeDamage(30);
	Fragger2.beRepaired(50);
	Fragger2.beRepaired(-30);
	Fragger2.beRepaired(60);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(-30);
	Fragger2.attack(Fragger2.getName());
	Fragger1.takeDamage(-30);
	std::cout << "\n";
	Didi.whoAmI();
	Diams.whoAmI();
	for (int i = 0; i < 50; ++i)
		Diams.attack(Didi.getName());
	Fragger2.takeDamage(30);
	Fragger2.beRepaired(50);
	Fragger2.beRepaired(-30);
	Fragger2.beRepaired(60);
	Fragger2.attack(Fragger2.getName());
	Didi.takeDamage(-30);
	Didi.guardGate();
	Didi.highFivesGuys();
	return (0);
}

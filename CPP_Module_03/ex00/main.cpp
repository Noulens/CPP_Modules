/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:26:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 15:20:06 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	ClapTrap	Bob("Dude");
	ClapTrap	Bob2;
	std::string	target_practice;
	
	Bob.attack(target_practice);
	Bob.takeDamage(5);
	Bob.beRepaired(6);
	Bob.beRepaired(2);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob2 = Bob;
	Bob2.attack(Bob.getName());
	Bob2.takeDamage(12);
	ClapTrap Duder("Duder");
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.takeDamage(9);
	Duder.attack(Bob2.getName());
	Duder.beRepaired(2);
	Duder.takeDamage(3);
	Duder.beRepaired(2);
	ClapTrap Dudest(Duder);
	Dudest.attack(Bob2.getName());
	Dudest.beRepaired(6);
	Duder.takeDamage(2);
	return (0);
}

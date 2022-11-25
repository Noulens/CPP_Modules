/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:26:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 18:48:41 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	ClapTrap	Bob("Dude");
	ClapTrap	Bob2;
	ScavTrap	Scavenger1("Skaven1");
	ScavTrap	Scavenger2("Skaven2");
	std::string	target_practice;

	Bob.attack(target_practice);
	Bob.takeDamage(5);
	Bob.beRepaired(6);
	Bob.beRepaired(2);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	Bob.attack(target_practice);
	//Bob.attack(target_practice);
	//Bob.attack(target_practice);
	//Bob.attack(target_practice);
	//Bob.attack(target_practice);
	//Bob.attack(target_practice);
	//Bob2 = Bob;
	//Bob2.attack(Bob.getName());
	Bob2.takeDamage(4);
	Bob2.beRepaired(-0);
	Bob2.beRepaired(-2);
	Bob2.beRepaired(5);
	Bob2.beRepaired(5);
	ClapTrap Duder("Duder");
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	Duder.attack(Bob2.getName());
	//Duder.attack(Bob2.getName());
	//Duder.attack(Bob2.getName());
	//Duder.attack(Bob2.getName());
	Duder.takeDamage(9);
	Duder.attack(Bob2.getName());
	Duder.beRepaired(2);
	Duder.takeDamage(-3);
	Duder.beRepaired(2);
	ClapTrap Dudest(Duder);
	Dudest.attack(Bob2.getName());
	Dudest.beRepaired(6);
	Duder.takeDamage(100);
	Duder.beRepaired(2);

	std::cout << "\n";

	Scavenger1.attack(target_practice);
	Scavenger1.attack(Scavenger2.getName());
	Scavenger2.takeDamage(20);
	Scavenger1.attack(Scavenger2.getName());
	Scavenger2.takeDamage(20);
	Scavenger1.attack(Scavenger2.getName());
	Scavenger2.takeDamage(20);
	Scavenger2.beRepaired(50);
	Scavenger2.beRepaired(60);
	Scavenger2.beRepaired(60);
	Scavenger2.attack(Scavenger2.getName());
	Scavenger1.takeDamage(20);
	Scavenger2.attack(Scavenger2.getName());
	Scavenger1.takeDamage(-20);
	Scavenger2.guardGate();
	Scavenger1.guardGate();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:26:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 13:27:14 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	ClapTrap	Bob("Bob");
	ClapTrap	Dude;
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
	Dude = Bob;
	Dude.attack(Bob.getName());
	Dude.takeDamage(12);
	ClapTrap Duder("Duder");
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.attack(Dude.getName());
	Duder.takeDamage(9);
	Duder.attack(Dude.getName());
	Duder.beRepaired(2);
	Duder.takeDamage(3);
	Duder.beRepaired(2);
	return (0);
}

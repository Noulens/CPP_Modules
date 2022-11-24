/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:26:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:20:01 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	FragTrap	Fragger1("Fragger1");
	FragTrap	Fragger2("Fragger2");
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
	Fragger2.highFivesGuys();
	Fragger1.highFivesGuys();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 15:18:23 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "colors.h"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>
#include <string>

int	main( void )
{
	AMateria *gb[4];
	
	std::cout << YELLOW << "======== Create new MaterieSource src of IMateria type ========" << RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << YELLOW << "======== Create new Ice and Cure ========" << RESET << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	std::cout << DARK_YELLOW << "------ template full ------" << RESET << std::endl;
	gb[0] = new Cure();
	src->learnMateria(gb[0]);
	std::cout << YELLOW << "======== Create new Character me of ICharacter type ========" << RESET << std::endl;
	ICharacter* me = new Character("me");
	std::cout << YELLOW << "======== Declare AMateria tmp pointer ========" << RESET << std::endl;
	AMateria* tmp;
	
	std::cout << DARK_YELLOW << "------ AMaterie tmp pointer points to CreataMatria Ice return ------" << RESET << std::endl;
	tmp = src->createMateria("ice");
	gb[1] = tmp;
	std::cout << YELLOW << "======== Equip tmp ice 0 ========" << RESET << std::endl;
	me->equip(tmp);
	
	std::cout << DARK_YELLOW << "------ AMaterie tmp pointer now points to CreataMatria Cure return ------" << RESET << std::endl;
	tmp = src->createMateria("cure");
	
	std::cout << YELLOW << "======== Equip tmp cure 1 ========" << RESET << std::endl;
	me->equip(tmp);
	
	std::cout << DARK_YELLOW << "------ AMaterie tmp pointer now points to CreataMatria test return ------" << RESET << std::endl;
	tmp = src->createMateria("test");
	
	std::cout << YELLOW << "======== Equip tmp test 2 ========" << RESET << std::endl;
	me->equip(tmp);
	
	std::cout << DARK_YELLOW << "------ AMaterie tmp pointer now points to CreataMatria test2 return ------" << RESET << std::endl;
	tmp = src->createMateria("test2");
	
	std::cout << YELLOW << "======== Equip tmp test2 3 ========" << RESET << std::endl;
	me->equip(tmp);
	
	std::cout << DARK_YELLOW << "------ AMaterie tmp pointer now points to CreataMatria test3 return ------" << RESET << std::endl;
	tmp = src->createMateria("test3");
	
	std::cout << YELLOW << "======== Equip tmp test3 4 ========" << RESET << std::endl;
	std::cout << DARK_YELLOW << "------ inventory full ------" << RESET << std::endl;
	me->equip(tmp);
	std::cout << YELLOW << "======== Create new Character bob of ICharacter type ========" << RESET << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << YELLOW << "======== Use tmp 0 on bob ========" << RESET << std::endl;
	me->use(0, *bob);
	std::cout << YELLOW << "======== Use tmp 1 on bob ========" << RESET << std::endl;
	me->use(1, *bob);
	std::cout << YELLOW << "======== Use tmp 3 on bob ========" << RESET << std::endl;
	std::cout << DARK_YELLOW << "------ materie of type test unknown ------" << RESET << std::endl;
	me->use(3, *bob);
	std::cout << YELLOW << "======== unequip idx 0 ========" << RESET << std::endl;
	me->unequip(0);
	std::cout << YELLOW << "======== unequip idx 0 ========" << RESET << std::endl;
	me->unequip(0);
	std::cout << YELLOW << "======== Destructor for bob ========" << RESET << std::endl;
	delete bob;
	std::cout << YELLOW << "======== Destructor for me ========" << RESET << std::endl;
	delete me;
	std::cout << YELLOW << "======== Destructor for ImateriaSource src ========" << RESET << std::endl;
	delete src;
	delete gb[0];
	delete gb[1];
	return 0;
}

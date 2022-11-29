/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 10:55:18 by waxxy            ###   ########.fr       */
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
	std::cout << YELLOW << "======== Create new MaterieSource src of IMateria type ========" << RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout << YELLOW << "======== Create new Ice and Cure ========" << RESET << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << YELLOW << "======== Create new Character me of ICharacter type ========" << RESET << std::endl;
	ICharacter* me = new Character("me");
	std::cout << YELLOW << "======== Declare AMateria tmp pointer ========" << RESET << std::endl;
	AMateria* tmp;
	std::cout << YELLOW << "======== AMaterie tmp pointer points to CreataMatria Ice return ========" << RESET << std::endl;
	tmp = src->createMateria("ice");
	std::cout << YELLOW << "======== Equip tmp 0 ========" << RESET << std::endl;
	me->equip(tmp);
	std::cout << YELLOW << "======== AMaterie tmp pointer now points to CreataMatria Cure return ========" << RESET << std::endl;
	tmp = src->createMateria("cure");
	std::cout << YELLOW << "======== Equip tmp 1 ========" << RESET << std::endl;
	me->equip(tmp);
	std::cout << YELLOW << "======== Create new Character bob of ICharacter type ========" << RESET << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << YELLOW << "======== Use tmp 0 on bob ========" << RESET << std::endl;
	me->use(0, *bob);
	std::cout << YELLOW << "======== Use tmp 1 on bob ========" << RESET << std::endl;
	me->use(1, *bob);
	std::cout << YELLOW << "======== Destructor for bob ========" << RESET << std::endl;
	delete bob;
	std::cout << YELLOW << "======== Destructor for me ========" << RESET << std::endl;
	delete me;
	std::cout << YELLOW << "======== Destructor for ImateriaSource src ========" << RESET << std::endl;
	delete src;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 12:36:06 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "colors.h"
#include <iostream>
#include <string>

int	main( void )
{
	std::cout << YELLOW << "------- Construction -------" << RESET << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << YELLOW << "------- Get type -------" << RESET << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
		std::cout << YELLOW << "------- Make sound -------" << RESET << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << YELLOW << "------- Destruction -------" << RESET << std::endl;
    delete meta;
	delete dog;
	delete cat;
	std::cout << YELLOW << "------- Construction wrong -------" << RESET << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout << YELLOW << "------- wrong type -------" << RESET << std::endl;
	std::cout << wmeta->getType() << std::endl;
	std::cout << wcat->getType() << std::endl;
	std::cout << YELLOW << "------- wrong sound -------" << RESET << std::endl;
	wmeta->makeSound();
	wcat->makeSound();
	std::cout << YELLOW << "------- destruction wrong -------" << RESET << std::endl;
	delete wmeta;
	delete wcat;
	std::cout << YELLOW << "------- Test stack reference -------" << RESET << std::endl;
	const Animal	&cat2 = Cat();
	std::cout << cat2.getType() << std::endl;
	cat2.makeSound();
	std::cout << YELLOW << "------- Test stack variable animal type -------" << RESET << std::endl;
	const Animal	cat3 = Cat();
	std::cout << cat3.getType() << std::endl;
	cat3.makeSound();
	return (0);
}

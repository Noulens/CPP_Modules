/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:37:41 by tnoulens         ###   ########.fr       */
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
	const Animal	*meta = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();
	const Animal	&cat2 = Cat();
	const Animal	cat3 = Cat();

	std::cout << meta->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
    delete meta;
	delete dog;
	delete cat;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout << wmeta->getType() << std::endl;
	std::cout << wcat->getType() << std::endl;
	wmeta->makeSound();
	wcat->makeSound();
	delete wmeta;
	delete wcat;

	std::cout << cat2.getType() << std::endl;
	cat2.makeSound();
	std::cout << cat3.getType() << std::endl;
	cat3.makeSound();
	return (0);
}

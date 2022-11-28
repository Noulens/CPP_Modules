/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 16:47:05 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "colors.h"
#include <iostream>
#include <string>

int	main( void )
{
	// std::cout << YELLOW << "======== Abstract test ========" << RESET << std::endl;
	// const Animal test;
	std::cout << YELLOW << "======== Leak abstract test ========" << RESET << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;
	std::cout << "\n";
	std::cout << YELLOW << "======== Loop abstract pointers creation ========" << RESET << std::endl;
	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << "\n";
	std::cout << YELLOW << "======== Loop destruction ========" << RESET << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "\n";
	std::cout << YELLOW << "======== create cat and dogs ========" << RESET << std::endl;
	const Cat *k = new Cat();
	const Dog *t = new Dog();
	std::cout << "\n";
	std::cout << YELLOW << "======== Fill cat ideas ========" << RESET << std::endl;
	for (int i = 0; i < 10; ++i)
		k->getBrain()->setIdeas(i, "cat ideas");
	std::cout << "\n";
	std::cout << YELLOW << "======== Check brain ========" << RESET << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << k->getBrain()->getIdeas(i) << "\n";
	std::cout << DARK_YELLOW << "---- check non valid index ----" << RESET << std::endl;
	std::cout << k->getBrain()->getIdeas(-6) << "\n";
	std::cout << "\n";
	std::cout << YELLOW << "======== Check deep copy ========" << RESET << std::endl;
	std::cout << DARK_YELLOW << "---- Copy cat ----" << RESET << std::endl;
	const Cat *f = new Cat(*k);
	std::cout << "\n";
	std::cout << DARK_YELLOW << "---- output ideas in copy ----" << RESET << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << f->getBrain()->getIdeas(i) << "\n";
	std::cout << "\n";
	std::cout << YELLOW << "======== Destructors ========" << RESET << std::endl;
	delete k;
	delete f;
	delete t;
	return (0);
}

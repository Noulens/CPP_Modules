/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 14:39:32 by tnoulens         ###   ########.fr       */
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
	std::cout << YELLOW << "======== Leak test ========" << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << "\n";
	std::cout << YELLOW << "======== Loop creation ========" << RESET << std::endl;
	Animal	*animals[10];
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
	std::cout << YELLOW << "======== Fill ideas ========" << RESET << std::endl;
	const Cat *k = new Cat();
	for (int i = 0; i < 10; ++i)
		k->getBrain()->setIdeas(i, "animal ideas");
	std::cout << "\n";
	std::cout << YELLOW << "======== Check brain ========" << RESET << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << k->getBrain()->getIdeas(i) << "\n";
	std::cout << "\n";
	std::cout << YELLOW << "======== Check deep copy ========" << RESET << std::endl;
	std::cout << DARK_YELLOW << "---- copy constructor new cat ----" << RESET << std::endl;
	const Cat *f = new Cat(*k);
	std::cout << DARK_YELLOW << "---- destructor old cat ----" << RESET << std::endl;
	delete k;
	std::cout << DARK_YELLOW << "---- check new cat deep copy ----" << RESET << std::endl;
	for (int i = 0; i < 10; ++i)
		std::cout << f->getBrain()->getIdeas(i) << "\n";
	std::cout << "\n";
	std::cout << DARK_YELLOW << "---- delete new cat deep copy ----" << RESET << std::endl;
	delete f;
	return (0);
}

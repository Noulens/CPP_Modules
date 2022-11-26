/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 17:44:20 by tnoulens         ###   ########.fr       */
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
	std::cout << YELLOW << "======== leak test ========" << RESET << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << "\n";
	std::cout << YELLOW << "======== loop creation ========" << RESET << std::endl;
	Animal	*animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
		delete animals[i];
	std::cout << "\n";
	std::cout << YELLOW << "======== Make sound ========" << RESET << std::endl;
	
	std::cout << "\n";
	std::cout << YELLOW << "======== Destruction ========" << RESET << std::endl;
	
	std::cout << "\n";
	std::cout << YELLOW << "======== Test stack reference ========" << RESET << std::endl;

	std::cout << "\n";
	std::cout << YELLOW << "======== Test stack variable animal type ========" << RESET << std::endl;

	return (0);
}

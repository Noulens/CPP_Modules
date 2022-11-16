/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:13:56 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 19:10:06 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "colors.h"
#include "Zombie.hpp"

void	randomChump( std::string name );
Zombie*	zombieHorde( int N, std::string name );

int	main(int argc, char **argv)
{
	Zombie		*zombheap;
	int			n;
	std::string	name;

	if (argc >= 3)
	{
		std::istringstream	is(argv[1]);
		is >> n;
		name = argv[2];
	}
	else
	{
		n = 10;
		name = "Rob";
	}
	zombheap = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		std::cout << i << " is trying to speak... ";
		zombheap[i].annonce();
	}
	delete[] zombheap;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:13:56 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 17:31:27 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colors.h"
#include "Zombie.hpp"

void	randomChump( std::string name );
Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	*zombheap;
	int		n = 10;

	zombheap = zombieHorde(n, "Rob");
	for (int i = 0; i < n; i++)
	{
		std::cout << i << " is trying to speak... ";
		zombheap[i].annonce();
	}
	delete[] zombheap;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:13:56 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 16:38:52 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colors.h"
#include "Zombie.hpp"

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

int	main(void)
{
	Zombie	*zombheap;
	Zombie	zztack = Zombie("Stack");

	zombheap = newZombie("Heap");
	zombheap->annonce();
	randomChump("Chump");
	zztack.annonce();
	delete zombheap;
	return (0);
}

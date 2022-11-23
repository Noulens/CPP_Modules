/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:35:07 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/23 17:33:09 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	Point a(6, -4), b(6, 6), c(-6.0f, 6), p(3.5f, -2.2f);

	if (bsp(a, b, c, p) == true)
		std::cout << GREEN << "Point dans le triangle" << RESET << std::endl;
	else
		std::cout << RED << "Pas dans le triangle" << RESET << std::endl;
	return 0;
}

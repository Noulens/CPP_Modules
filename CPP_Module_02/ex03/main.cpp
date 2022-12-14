/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:35:07 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/24 18:39:43 by tnoulens         ###   ########.fr       */
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
	Point a(6, -4), b(6, 6), c(-6.0f, 6), p(6, 6);

	if (bsp(a, b, c, p) == true)
		std::cout << GREEN << "oui" << RESET << std::endl;
	else
		std::cout << RED << "non" << RESET << std::endl;
	return 0;
}

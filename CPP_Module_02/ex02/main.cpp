/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:35:07 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/22 19:16:21 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));
	Fixed	const c(Fixed(5.05f) / Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << c << std::endl;
	std::cout << Fixed::min(b, c) << std::endl;
	return 0;
}

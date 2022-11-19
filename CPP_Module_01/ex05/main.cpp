/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:35:07 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/19 18:47:54 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "colors.h"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	karen;

	if (argc >= 2)
	{
		std::string level = argv[1];
		karen.complain(level);
	}
	else
	{
		karen.complain("DEBUG");
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
		karen.complain("TEST");
		karen.complain("DEBUG");
	}
	return (0);
}

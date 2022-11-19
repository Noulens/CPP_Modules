/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:35:07 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/19 19:52:16 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "colors.h"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl		karen;

	if (argc >= 2)
	{
		std::string level = argv[1];
		int			filter;

		filter = karen.filter(level);
		switch (filter)
		{
		case 0:
			karen.complain("DEBUG");
			karen.complain("INFO");
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case 1:
			karen.complain("INFO");
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case 2:
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case 3:
			karen.complain("ERROR");
			break ;
		default:
			karen.complain("");
		}
	}
	else
		karen.complain("");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:47:22 by waxxy             #+#    #+#             */
/*   Updated: 2023/03/13 17:47:23 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitcoinExchange	btcex;

	if (argc != 3)
	{
		std::cout << "Usage: ./btc <path_to_database>" << std::endl;
	}
	else
	{
		BitcoinExchange::buildDatabase(argv[2], btcex);
	}
	// Get the input.txt file
	;
	return (0);
}

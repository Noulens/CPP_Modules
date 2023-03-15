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

	if (argc != 2)
		std::cout << "Error: could not open file." << std::endl;
	else
	{
		try
		{
			BitcoinExchange::buildDatabase("./cpp_09/data.csv", btcex);
		}
		catch (const BitcoinExchange::database_error &e)
		{
			std::cout << e.what() << std::endl;
			return (1);
		}
		try
		{
			btcex.takeInput(argv[1]);
		}
		catch (const BitcoinExchange::database_error &e)
		{
			std::cout << e.what() << std::endl;
			return (1);
		}
	}
	return (0);
}

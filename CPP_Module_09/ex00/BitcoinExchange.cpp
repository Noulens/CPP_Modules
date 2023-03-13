/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:48:11 by waxxy             #+#    #+#             */
/*   Updated: 2023/03/13 17:48:13 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void)assign;
	return (*this);
}

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

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _regex()
{
	try
	{
		// compile the regular expression
		if (regcomp(&this->_regex, PATTERN, REG_EXTENDED))
			throw BitcoinExchange::regex_error();
	}
	catch (const BitcoinExchange::regex_error &e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _regex()
{
	*this = copy;
}

BitcoinExchange::~BitcoinExchange()
{
	// free the regular expression
	regfree(&this->_regex);
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	this->data = assign.data;
	return (*this);
}

bool BitcoinExchange::checkdate(const std::string &date)
{
	if (!regexec(&this->_regex, date.c_str(), 0, NULL, 0))
		return (true);
	else
		return (false);
}

const char *BitcoinExchange::regex_error::what() const throw()
{
	return ("Error compiling regex");
}

void BitcoinExchange::returnPrices(std::string const &date, float const &quantity)
{
	if (!this->checkdate(date))
		std::cout << "Error: bad input =>" << date << std::endl;
	else if (quantity < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (quantity > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else if (this->data.find(date) != this->data.end())
	{
		std::cout << date << "=>" << this->data[date] << "="
				  << this->data[date] * quantity << std::endl;
	}
}

bool BitcoinExchange::buildDatabase(const char *filename, BitcoinExchange &btcex)
{
	// Open the .csv file
	std::ifstream file(filename);
	if (!file)
	{
		std::cout << "Error: file not found or access rights issue" << std::endl;
		return (false);
	}
	// Read in the BitcoinPrice information and store it in the map
	std::string line;
	// Skip the first line
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream	iss(line);
		std::string			date, price_str;
		float				price;
		// Parse the date and price from the line
		if (std::getline(iss, date, ',') && std::getline(iss, price_str))
		{
			// Check date format
			if (!btcex.checkdate(date))
			{
				std::cout << "Error: bad input => " << date << std::endl;
				return (false);
			}
			// Convert the price string to a float
			std::istringstream price_iss(price_str);
			price_iss >> price;
			// Store "price" for key "date" in the map "data"
			btcex.data[date] = price;
		}
	}
	return (true);
}

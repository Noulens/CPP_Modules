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

/* compile the regular expression */
BitcoinExchange::BitcoinExchange() : _regex()
{
	try
	{
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

/* free the regular expression */
BitcoinExchange::~BitcoinExchange()
{
	regfree(&this->_regex);
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	this->data = assign.data;
	return (*this);
}

std::map<std::string, float, std::greater<std::string> > BitcoinExchange::getData() const
{
	return (this->data);
}

bool BitcoinExchange::checkdate(const std::string &date)
{
	if (!regexec(&this->_regex, date.c_str(), 0, NULL, 0))
		return (true);
	else
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
}

const char *BitcoinExchange::regex_error::what() const throw()
{
	return ("Error: compiling regex");
}

const char *BitcoinExchange::database_error::what() const throw()
{
	return ("Error: problem with file");
}

std::map<std::string, float>::iterator BitcoinExchange::findClosestDate(std::string const &date)
{
	return (data.lower_bound(date));
}

void BitcoinExchange::returnPrices(std::string const &date, float const &quantity)
{
	if (!this->checkdate(date))
		return ((void)0);
	else if (quantity < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (quantity > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
	{
		this->findClosestDate(date);
		std::cout << date << " => " << quantity << " = "
				  << this->findClosestDate(date)->second * quantity << std::endl;
	}
}

/*
 * 	- Open the .csv file
 * 	- Read in the BitcoinPrice information and store it in the map
 * 	- Skip the first line
 * 	- Parse the date and price from the line
 * 	- Check date format
 * 	- Convert the price string to a float
 * 	- Store "price" for key "date" in the map "data"
 */
void BitcoinExchange::buildDatabase(const char *filename, BitcoinExchange &btcex)
{
	std::ifstream file(filename);
	if (!file)
	{
		std::cout << "Error: file not found or access rights issue" << std::endl;
		throw BitcoinExchange::database_error();
	}
	std::string line;
	std::getline(file, line);
	if (line != "date,exchange_rate")
	{
		std::cout << "Error: incorrect headers in .csv database" << std::endl;
		throw BitcoinExchange::database_error();
	}
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date, price_str;
		float price;
		if (std::getline(iss, date, ',') && std::getline(iss, price_str))
		{
			if (!btcex.checkdate(date))
				throw BitcoinExchange::database_error();
			std::istringstream price_iss(price_str);
			price_iss >> price;
			btcex.data[date] = price;
		}
	}
}

/*
 * 	- Open the input file
 * 	- Skip the first line
 * 	- Remove spaces from the line
 * 	- Parse the date and value from the line
 * 	- Check date format
 * 	- Convert the price string to a float
 * 	- Check for potential error if the parsing of date and value are empty
 */
void BitcoinExchange::takeInput(const char *filename)
{
	std::ifstream file(filename);
	if (!file)
	{
		std::cout << "Error: file not found or access rights issue" << std::endl;
		throw BitcoinExchange::database_error();
	}
	std::string line;
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cout << "Error: incorrect headers in input file" << std::endl;
		throw BitcoinExchange::database_error();
	}
	while (std::getline(file, line))
	{
		line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
		std::istringstream iss(line);
		std::string date, value_str;
		float value;
		if (std::getline(iss, date, '|') && std::getline(iss, value_str))
		{
			std::istringstream value_iss(value_str);
			value_iss >> value;
			returnPrices(date, value);
		}
		else if (date.empty())
			std::cout << "Error: missing date" << std::endl;
		else if (value_str.empty() && this->checkdate(date))
			std::cout << "Error: missing value" << std::endl;
	}
}

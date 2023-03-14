/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:48:22 by waxxy             #+#    #+#             */
/*   Updated: 2023/03/13 17:48:23 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_BITCOINEXCHANGE_HPP
# define CPP_MODULES_BITCOINEXCHANGE_HPP

# include <map>
# include <string>
# include <regex.h>
# include <iostream>
# include <exception>
# include <cstdlib>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
	private:
	regex_t _regex;
	public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &copy);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &assign);
	void		returnPrices(std::string const &date, float const &quantity);
	bool		checkdate(const std::string &date);
	// Static method to build the database, can be called without an instance of the class
	static bool	buildDatabase(const char *filename, BitcoinExchange &btcex);

	class regex_error: public std::exception
	{
		public:
		virtual const char *what() const throw ();
	};
	std::map<std::string, float>	data;
};

#endif

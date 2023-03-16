/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:48:22 by waxxy             #+#    #+#             */
/*   Updated: 2023/03/16 13:50:38 by tnoulens         ###   ########.fr       */
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
# include <algorithm>

// regex pattern for YYYY-MM-DD format
// https://regexpattern.com/date-yyyy-mm-dd/
# define PATTERN "^[0-9]{4}-(((0[13578]|(10|12))-(0[1-9]|[1-2][0-9]|3[0-1]))|(02-(0[1-9]|[1-2][0-9]))|((0[469]|11)-(0[1-9]|[1-2][0-9]|30)))$"


// Static method to build the database, can be called without an instance of the class
// For the map container, we can use the third parameter, that is std::greater to store elements in descending order.
class BitcoinExchange
{
	private:
		regex_t _regex;
		void		returnPrices(std::string const &date, float const &quantity);
		bool		checkdate(const std::string &date);
		std::map<std::string, float, std::greater<std::string> >	data;
		std::map<std::string, float>::iterator	findClosestDate(std::string const &date);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &assign);
		static void	buildDatabase(const char *filename, BitcoinExchange &btcex);
		void		takeInput(const char *filename);
		std::map<std::string, float, std::greater<std::string> > getData() const;

	class regex_error: public std::exception
	{
		public:
		virtual const char *what() const throw ();
	};

	class database_error: public std::exception
	{
		public:
		virtual const char *what() const throw ();
	};
};

#endif

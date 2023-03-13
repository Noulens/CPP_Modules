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

class BitcoinExchange
{
	protected:
	public:
	BitcoinExchange();

	BitcoinExchange(const BitcoinExchange &copy);

	~BitcoinExchange();

	BitcoinExchange &operator=(const BitcoinExchange &assign);
};

#endif
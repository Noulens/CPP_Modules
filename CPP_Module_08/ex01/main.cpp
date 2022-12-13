/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:43:15 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/08 14:32:09 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Span.hpp"

int     main( void )
{
	typedef std::vector<int> ints_t;
	{

		std::cout << " TEST 1 " << std::endl;

		std::cout << "Span(5) + addNumber {5, 3, 17, 9, 11}" << std::endl;

		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{

		std::cout << " TEST 2 |" << std::endl;

		std::cout << "Span(5) + addNumber {5, 3, 17, 9, 11, 1000}" << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(1000);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
	}
	std::cout << std::endl;
	{

		std::cout << " TEST 3 " << std::endl;

		std::cout << "Span(5) empty" << std::endl;
		try
		{
			Span sp = Span(5);
			std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span = " << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
		std::cout << "Span(5) + 1 number" << std::endl;
		try
		{
			Span sp2 = Span(5);
			sp2.addNumber(42);
			std::cout << "Shortest span = " << sp2.shortestSpan() << std::endl;
			std::cout << "Longest span = " << sp2.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
	}
	std::cout << std::endl;
	{
		std::cout << " TEST 4 " << std::endl;
		std::cout << "vector = { 5, 765, 564, 2, 87, 23, 9};" << std::endl;
		std::cout << "Span(7) + addMany(deposits.begin(), deposits.end())" << std::endl;
		int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9};
		size_t const		d_size( sizeof(d) / sizeof(int) );
		ints_t				deposits( d, d + d_size );
		Span sp = Span(7);
		sp.addMany(deposits.begin(), deposits.end());
		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;
		std::cout << "Try addNumber 0" << std::endl;
		try
		{
			sp.addNumber(0);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
	}
	std::cout << std::endl;
	{
		std::cout << " TEST 5 " << std::endl;
		std::cout << "Span(10000)" << std::endl;
		std::cout << "vector containing 10k numbers" << std::endl;
		ints_t				deposits(10000);
		int i = 0;
		std::cout << "filling vector with number from 0 to 9999..." << std::endl;
		for (std::vector<int>::iterator it = deposits.begin(); it != deposits.end(); it++)
			*it = i++;
		Span sp = Span(10000);
		try
		{
			sp.addMany(deposits.begin(), deposits.end());
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
		std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;
		std::cout << "Try addNumber 0" << std::endl;
		try
		{
			sp.addNumber(0);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:43:15 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/07 20:22:44 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T > void	increment(T &arg)
{
	arg += 1;
}

int	main( void )
{
	int		array[100];
	char	str[12] = "Hello world";

	for (size_t i = 0; i < 100; i++)
	{
		array[i] = i;
	}
	{
		std::cout << *array << std::endl;
		std::cout << str << std::endl;
		std::cout << "iter + increment:" << std::endl;
		::iter<int>(array, 100, increment<int>);
		::iter<char>(str, 11, increment<char>);
		std::cout << *array << std::endl;
		std::cout << str << std::endl;
	}
	return (0);
}
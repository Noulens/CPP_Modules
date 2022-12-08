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

#include "easyfind.hpp"
#include <iostream>

int	main()
{
	std::list<int>	lst;

	for (int i = 0; i <= 100; ++i)
		lst.push_back(i);
	std::list<int>::const_iterator it;
	try
	{
		it = easyfind(lst, 101);
		std::cout << *it << std::endl;
	}
	catch (EasyFindError &e)
	{
		std::cout << e.what();
	}

	std::vector<int>			lst2(101);
	std::vector<int>::iterator	it3;
	int i = 0;
	for (it3 = lst2.begin(); it3 != lst2.end() ; ++it3)
	{
		*it3 = i++;
	}
	std::vector<int>::const_iterator it2;
	try
	{
		it2 = easyfind(lst2, 100);
		std::cout << *it2 << std::endl;
	}
	catch (EasyFindError &e)
	{
		std::cout << e.what();
	}
	return (0);
}

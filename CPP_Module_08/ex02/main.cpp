/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:55:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/13 15:55:09 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.h"
#include <list>

int main()
{
	{
		std::cout << " TEST 1 " << std::endl;
		std::cout << "Declare Mstack:" << std::endl;
		MutantStack<int> mstack;
		std::cout << "Push 5 then 17 and display top:" << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		std::cout << "Pop 1 element and display size:" << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		std::cout << "Push 3, 5, 737, 0:" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		std::cout << "Declare iterator of type Mstack:" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Display stack using iterators:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << std::endl;
	{
		std::cout << " TEST 2 " << std::endl;
		std::cout << " Same results with lists " << std::endl;
		std::list<int> mstack;
		std::cout << "Push 5 then 17 and display top:" << std::endl;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		std::cout << "Pop 1 element and display size:" << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		std::cout << "Push 3, 5, 737, 0:" << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "Display list using iterators:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "Same tests are possible for reverse iterators" << std::endl;
	return 0;
}
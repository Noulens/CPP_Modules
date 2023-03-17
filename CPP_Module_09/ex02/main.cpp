/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:32:06 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/17 13:32:08 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe PM = PmergeMe();
	try
	{
		if (argc == 1)
			throw PmergeMe::PmergeMeException();
		PM.VsortMI(argc, (const char **)argv);
		PM.LsortMI(argc, (const char **)argv);
		PM.display(argc, (const char **)argv);
	}
	catch (PmergeMe::PmergeMeException &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}

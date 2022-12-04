/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:37:46 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/04 23:23:56 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <iomanip>
#include "Caster.hpp"
#include "cpp06.hpp"

int	main(int argc, char **argv)
{
	Caster	*caster = new Caster();

	if (argc != 2)
		return (delete caster, 1);
	std::string str = argv[1];
	if (!str.length())
		return (delete caster, 1);
	t_type i = caster->checkFormat(str);
	try
	{
		caster->doConversion(str, i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete caster;
		return (0);
	}
	std::cout << *caster;

	// std::cout
	// 	<< "type\t│ min()\t\t│ max()\n"
	// 	<< "bool\t│ "
	// 	<< std::numeric_limits<bool>::min() << "\t\t│ "
	// 	<< std::numeric_limits<bool>::max() << '\n'
	// 	<< "uchar\t│ "
	// 	<< +std::numeric_limits<unsigned char>::min() << "\t\t│ "
	// 	<< +std::numeric_limits<unsigned char>::max() << '\n'
	// 	<< "int\t│ "
	// 	<< std::numeric_limits<int>::min() << "\t│ "
	// 	<< std::numeric_limits<int>::max() << '\n'
	// 	<< "float\t│ "
	// 	<< std::numeric_limits<float>::min() << "\t│ "
	// 	<< std::numeric_limits<float>::max() << '\n'
	// 	<< "double\t│ "
	// 	<< std::numeric_limits<double>::min() << "\t│ "
	// 	<< std::numeric_limits<double>::max() << '\n';
	// 	std::cout << -1 * std::numeric_limits<double>::infinity() << '\n';
	delete caster;
	return (0);
}

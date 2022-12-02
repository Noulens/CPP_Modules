/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:37:46 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/02 18:59:13 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	(void)argv;
	std::cout
		<< "type\t│ min()\t\t│ max()\n"
		<< "bool\t│ "
		<< std::numeric_limits<bool>::min() << "\t\t│ "
		<< std::numeric_limits<bool>::max() << '\n'
		<< "uchar\t│ "
		<< +std::numeric_limits<unsigned char>::min() << "\t\t│ "
		<< +std::numeric_limits<unsigned char>::max() << '\n'
		<< "int\t│ "
		<< std::numeric_limits<int>::min() << "\t│ "
		<< std::numeric_limits<int>::max() << '\n'
		<< "float\t│ "
		<< std::numeric_limits<float>::min() << "\t│ "
		<< std::numeric_limits<float>::max() << '\n'
		<< "double\t│ "
		<< std::numeric_limits<double>::min() << "\t│ "
		<< std::numeric_limits<double>::max() << '\n';
		std::cout << -1 * std::numeric_limits<double>::infinity() << '\n';
}

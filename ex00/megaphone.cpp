/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:16:16 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/11 11:15:58 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int			j;
	size_t		i;
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			str = argv[j];
			for (i = 0; i < str.length(); i++)
				std::cout << (char)toupper(str[i]);
		}
	std::cout << std::endl;
	}
	return (0);
}

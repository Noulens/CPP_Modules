/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:29:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 18:14:31 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std:: string	str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "Adress:" << std::endl;
	std::cout << "str address     : " << &str << std::endl;
	std::cout << "PTR address held: " << stringPTR << std::endl;
	std::cout << "REF address held: " << &stringREF << std::endl;
	std::cout << "Value:" << std::endl;
	std::cout << "str value : " << str << std::endl;
	std::cout << "*ptr value: " << *stringPTR << std::endl;
	std::cout << "ref value : " << stringREF << std::endl;
	//std::cout << std::endl;
	//std::cout << "Only the str value is changed:" << std::endl;
	//str = "NOT BRAIN";
	//std::cout << "value of str: " << str << std::endl;
	//std::cout << "str address     : " << &str << std::endl;
	//std::cout << "PTR address held: " << stringPTR << std::endl;
	//std::cout << "REF address held: " << &stringREF << std::endl;
	//std::cout << "Value:" << std::endl;
	//std::cout << "str value : " << str << std::endl;
	//std::cout << "*ptr value: " << *stringPTR << std::endl;
	//std::cout << "ref value : " << stringREF << std::endl;
	//std::cout << std::endl;
	//std::cout << "Only the ref value is changed:" << std::endl;
	//stringREF = "HI THIS IS BRAIN";
	//std::cout << "value of stringREF: " << stringREF << std::endl;
	//std::cout << "str address     : " << &str << std::endl;
	//std::cout << "PTR address held: " << stringPTR << std::endl;
	//std::cout << "REF address held: " << &stringREF << std::endl;
	//std::cout << "Value:" << std::endl;
	//std::cout << "str value : " << str << std::endl;
	//std::cout << "*ptr value: " << *stringPTR << std::endl;
	//std::cout << "ref value : " << stringREF << std::endl;
	return (0);
}

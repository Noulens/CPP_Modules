/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:48 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:37:53 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type(WHITE "Wrong abstract animal"  RESET)
{
    std::cout << "wrong animal default constructor called for " << getType() << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
    std::cout << "wrong animal copy constructor called for " << getType() << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    this->_type = src._type;
    std::cout << "Wrong animal copy assignment called for " << getType() << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal destructor called for " << getType() << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void        WrongAnimal::makeSound(void) const
{
    std::cout << getType() << ": * wrong abstract noises *" << std::endl;
}

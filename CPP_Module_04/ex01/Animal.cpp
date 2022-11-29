/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:36:55 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 13:46:08 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type(WHITE  "abstract animal"  RESET)
{
    std::cout << "animal default constructor called for " << getType() << std::endl;
}

Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout << "animal copy constructor called for " << getType() << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    this->_type = src._type;
    std::cout << "animal copy assignment called for " << getType() << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "animal destructor called for " << getType() << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void        Animal::makeSound(void) const
{
    std::cout << getType() << ": * abstract noises *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:21 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:37:24 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = (GREEN "Dog" RESET);
    std::cout << "dog default constructor called for " << Animal::getType() << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "dog copy constructor called for " << Animal::getType() << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    this->_type = src._type;
    std::cout << "dog copy assignment called for " << Animal::getType() << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "dog destructor called for " << Animal::getType() << std::endl;
}

void        Dog::makeSound(void) const
{
    std::cout << Animal::getType() << ": wouf" << std::endl;
}

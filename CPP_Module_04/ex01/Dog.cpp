/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:21 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 14:14:28 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = (GREEN "Dog" RESET);
	this->_brain = new Brain();
    std::cout << "dog default constructor called for " << Animal::getType() << std::endl;
}

Dog::Dog(const Dog &src): Animal()
{
    this->_type = src.getType();
    this->_brain = new Brain(*(src.getBrain()));
    std::cout << "dog copy constructor called for " << Animal::getType() << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
    this->_type = src.getType();
    std::cout << "dog copy assignment called for " << Animal::getType() << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "dog destructor called for " << Animal::getType() << std::endl;
}

void        Dog::makeSound(void) const
{
    std::cout << Animal::getType() << ": wouf" << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}

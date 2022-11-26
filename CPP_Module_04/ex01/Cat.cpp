/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:08 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 18:09:00 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = (BLUE "Cat" RESET);
	this->_brain = new Brain();
	std::cout << "cat default constructor called for " << Animal::getType() << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "cat copy constructor called for " << Animal::getType() << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	std::cout << "cat copy assignment called for " << Animal::getType() << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "cat destructor called for " << Animal::getType() << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << Animal::getType() << ": miaou" << std::endl;
}

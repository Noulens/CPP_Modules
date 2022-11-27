/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:08 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/27 13:53:36 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = (BLUE "Cat" RESET);
	this->_brain = new Brain();
	std::cout << "cat default constructor called for " << Animal::getType() << std::endl;
}

Cat::Cat(const Cat &src): Animal()
{
	*this = src;
	this->_brain = new Brain(*(src.getBrain()));
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

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}

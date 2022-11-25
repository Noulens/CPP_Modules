/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:37:58 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:38:02 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->_type = (DARK_BLUE "wrong cat" RESET);
    std::cout << "Wrong cat default constructor called for " << WrongAnimal::getType() << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
    std::cout << "Wrong cat copy constructor called for " << WrongAnimal::getType() << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
    this->_type = src._type;
    std::cout << "Wrong cat copy assignment called for " << WrongAnimal::getType() << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong cat destructor called for " << WrongAnimal::getType() << std::endl;
}

void        WrongCat::makeSound(void) const
{
    std::cout << WrongAnimal::getType() << ": wrong miaou" << std::endl;
}

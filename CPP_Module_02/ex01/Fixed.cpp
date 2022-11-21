/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:40 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/20 15:53:35 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_value = 0;
	std::cout << "Fixed: Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	_fixed_value = copy.getRawBits();
	std::cout << "Fixed: Copy Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Fixed: Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &f)
{
	_fixed_value = f.getRawBits();
	std::cout << "Fixed: Assignment operator called" << std::endl;
	return (*this);
}

int Fixed::getRawBits(void) const /* returns the raw value of the fixed-point value*/
{
	std::cout << "Fixed: getRawBits function called" << std::endl;
	return (_fixed_value);
}

void Fixed::setRawBits(int const raw) /* sets the raw value of the fixed-point value*/
{
	_fixed_value = raw;
}

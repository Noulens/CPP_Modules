/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:40 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/21 21:39:52 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed_value = 0;
	std::cout << "Fixed: Default Constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_fixed_value = i << _fractionnal_bit;
	std::cout << "Fixed: int contructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	_fixed_value = roundf(f * (1 << _fractionnal_bit));
	std::cout << "Fixed: float contructor called" << std::endl;
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

Fixed & Fixed::operator = (const Fixed &assigned)
{
	_fixed_value = assigned.getRawBits();
	std::cout << "Fixed: Assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &ok)
{
	out << ok.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const /* returns the raw value of the fixed-point value*/
{
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw) /* sets the raw value of the fixed-point value*/
{
	_fixed_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixed_value / (1 << _fractionnal_bit));
}

int	Fixed::toInt(void) const
{
	return (_fixed_value >> _fractionnal_bit);
}

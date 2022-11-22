/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:46:40 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/22 19:21:47 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed()
{
	_fixed_value = 0;
}

Fixed::Fixed(const int i)
{
	_fixed_value = i << _fractionnal_bit;
}

Fixed::Fixed(const float f)
{
	_fixed_value = roundf(f * (1 << _fractionnal_bit));
}

Fixed::Fixed(const Fixed &copy)
{
	_fixed_value = copy.getRawBits();
}

//Destructor
Fixed::~Fixed()
{
}

//Operators
Fixed & Fixed::operator=(const Fixed &assigned)
{
	_fixed_value = assigned.getRawBits();
	return (*this);
}

Fixed & Fixed::operator++(void)
{
	++_fixed_value;
	return(*this);
}

Fixed & Fixed::operator--(void)
{
	--_fixed_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp(*this);

	++(*this);
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp(*this);

	--(*this);
	return (temp);
}

Fixed Fixed::operator+(const Fixed &operated_with)
{
	Fixed	temp;

	temp._fixed_value = this->_fixed_value + operated_with._fixed_value;
	return (temp);
}

Fixed Fixed::operator-(const Fixed &operated_with)
{
	Fixed temp;

	temp._fixed_value = this->_fixed_value - operated_with._fixed_value;
	return (temp);
}

Fixed Fixed::operator*(const Fixed &operated_with)
{
	Fixed	temp;

	//// sol 2:
	//temp._fixed_value = this->_fixed_value *operated_with._fixed_value;
	//// rounding :
	//temp._fixed_value = (temp._fixed_value >> _fractionnal_bit) + ((temp._fixed_value >> (_fractionnal_bit - 1) & 1));
	temp._fixed_value = ((this->_fixed_value * operated_with.getRawBits()) >> this->_fractionnal_bit);
	return (temp);
}

Fixed Fixed::operator/(const Fixed &operated_with)
{
	Fixed	temp;

	if (!operated_with.toFloat())
	{
		std::cout << "Divide by zero impossible" << std::endl;
		return (Fixed());
	}
	//// sol 2 :
	//temp._fixed_value = this->_fixed_value << this->_fractionnal_bit;
	// rounding up for positive and down for negative:
	//if ((temp._fixed_value >= 0 && operated_with._fixed_value >= 0) || (temp._fixed_value <= 0 && operated_with._fixed_value <= 0))
	//	temp._fixed_value += (operated_with._fixed_value  >> 1);
	//else
	//	temp._fixed_value -= (operated_with._fixed_value >> 1);
	//// OR rouding with roundf :
	////temp._fixed_value = roundf(temp._fixed_value);
	//temp._fixed_value /= operated_with._fixed_value;
	temp._fixed_value = (this->_fixed_value << _fractionnal_bit) / operated_with._fixed_value;
	return (temp);
}

std::ostream &operator<<(std::ostream &out, const Fixed &ok)
{
	out << ok.toFloat();
	return (out);
}

bool Fixed::operator==(const Fixed &compared_to) const
{
	return (this->getRawBits() == compared_to.getRawBits());
}

bool Fixed::operator!=(const Fixed &compared_to) const
{
	return (this->getRawBits() != compared_to.getRawBits());
}

bool Fixed::operator<(const Fixed &compared_to) const
{
	return (this->getRawBits() < compared_to.getRawBits());
}

bool Fixed::operator>(const Fixed &compared_to) const
{
	return (this->getRawBits() > compared_to.getRawBits());
}

bool Fixed::operator<=(const Fixed &compared_to) const
{
	return (this->getRawBits() <= compared_to.getRawBits());
}

bool Fixed::operator>=(const Fixed &compared_to) const
{
	return (this->getRawBits() >= compared_to.getRawBits());
}

//Member function overload
Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj2);
	else
		return (obj1);
}

const Fixed &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1 > obj2)
		return (obj2);
	else
		return (obj1);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj2);
	else
		return (obj1);
}

const Fixed &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1 < obj2)
		return (obj2);
	else
		return (obj1);
}

//Member functions
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

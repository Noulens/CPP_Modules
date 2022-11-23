/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:37:00 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/23 18:54:34 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y))
{
}
//Copy constructor
Point::Point(const Point &copy): _x(copy.getx()), _y(copy.gety())
{
}
// destructor
Point::~Point()
{
}

Fixed	Point::getx(void) const
{
	return (this->_x);
}

Fixed	Point::gety(void) const
{
	return (this->_y);
}

bool Point::operator == (const Point &compared_to) const
{
	if (_x.getRawBits() != compared_to.getx().getRawBits())
		return (false);
	else if (_x.getRawBits() != compared_to.gety().getRawBits())
		return (false);
	else
		return (true);
}

Point &Point::operator = (const Point &assign)
{
	(void)assign;
	return (*this);
}

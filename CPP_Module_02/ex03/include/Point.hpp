/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:30:17 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/23 14:10:36 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT__HPP__
# define __POINT__HPP__

#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>

class	Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();
		Point &operator = (const Point &assign);
		bool operator == (const Point &compared_to) const;
		
		Fixed	getx(void) const;
		Fixed	gety(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

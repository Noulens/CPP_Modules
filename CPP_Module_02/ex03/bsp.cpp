/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:31:53 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/24 18:40:24 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "colors.h"
#include "Fixed.hpp"

int	Product(Point const a, Point const b, Point const p)
{
	Point	ab(b.getx().toFloat() - a.getx().toFloat(), b.gety().toFloat() - a.gety().toFloat());
	Point	ap(p.getx().toFloat() - a.getx().toFloat(), p.gety().toFloat() - a.gety().toFloat());
	Fixed	product(ab.getx() * ap.gety() - ab.gety() * ap.getx());

	if (product.toFloat() > 0)
		return (1);
	else
		return (-1);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int	cross_product;
	
	cross_product = Product(a, b, point) + Product(b, c, point) + Product(c, a, point);
	if (cross_product == 3 || cross_product == -3)
		return (true);
	else
		return (false);
}

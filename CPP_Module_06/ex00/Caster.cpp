/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:53:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/02 20:06:17 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

Caster::Caster()
{
	this->_aschar = 0;
	this->_asint = 0;
	this->_asfloat = 0;
	this->_asdouble = 0;
}

Caster::~Caster()
{
}

Caster::Caster(const Caster &copy)
{
	this->_aschar = copy.getAsChar();
	this->_asint = copy.getAsInt();
	this->_asfloat = copy.getAsFloat();
	this->_asdouble = copy.getAsDouble();
}

Caster &Caster::operator = (const Caster &assign)
{
	this->_aschar = assign.getAsChar();
	this->_asint = assign.getAsInt();
	this->_asfloat = assign.getAsFloat();
	this->_asdouble = assign.getAsDouble();
	return(*this);
}

char	Caster::getAsChar() const
{
	return (this->_aschar);
}

int	Caster::getAsInt() const
{
	return (this->_asint);
}

float	Caster::getAsFloat() const
{
	return (this->_asfloat);
}

double	Caster::getAsDouble() const
{
	return (this->_asdouble);
}

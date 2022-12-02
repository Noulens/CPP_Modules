/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:53:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/02 20:48:49 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

Caster::Caster()
{
	this->_aschar = 0;
	this->_asint = 0;
	this->_asfloat = 0;
	this->_asdouble = 0;
	this->_hasof = false;
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
	this->_hasof = copy.getHasOf();
}

Caster &Caster::operator = (const Caster &assign)
{
	this->_aschar = assign.getAsChar();
	this->_asint = assign.getAsInt();
	this->_asfloat = assign.getAsFloat();
	this->_asdouble = assign.getAsDouble();
	this->_hasof = assign.getHasOf();
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

bool	Caster::getHasOf() const
{
	return (this->_hasof);
}

const char *Caster::Problem::what() const throw()
{
	return ("Problem");
}

std::ostream &operator << (std::ostream &out, const Caster &ok)
{
	out << "char: ";
	if (!std::isprint(ok.getAsChar()))
	{
		out << " Non displayable\n"
			<< "int: " << ok.getAsInt() << '\n';
	}
	else if (ok.getHasOf())
	{
		out << "impossible\n"
			<< "int: impossible\n";
	}
	else
	{
		out << ok.getAsChar() << '\n'
			<< "int: " << ok.getAsInt() << '\n';
	}
	out	<< "float: " << ok.getAsFloat() << '\n'
		<< "double: " << ok.getAsDouble() << '\n';
	return (out);
}

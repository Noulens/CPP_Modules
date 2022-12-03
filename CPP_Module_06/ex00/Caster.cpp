/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:53:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/03 16:06:31 by waxxy            ###   ########.fr       */
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
	return ("non");
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
		out << '\'' << ok.getAsChar() << "'\n"
			<< "int: " << ok.getAsInt() << '\n';
	}
	out	<< "float: " << ok.getAsFloat();
	if (ok.getAsFloat() == ok.getAsInt())
		out << ".0f\n";
	else
		out << "f\n";
	out << "double: " << ok.getAsDouble();
	if (ok.getAsDouble() == ok.getAsInt())
		out << ".0";
	out << '\n';
	return (out);
}

t_type Caster::checkFormat(std::string &str)
{
	size_t				len = str.length();

	if (len == 1)
	{
		if (!std::isdigit(str[0]))
		{
			return (NANUM);
		}
		return (DONE);
	}
	return (NANUM);
}

void	Caster::doConversion(std::string &str, t_type &t)
{
	std::string line = str + " " + str + " " + str + " " + str;
	std::istringstream is(line);

	switch (t)
	{
		case INT:
			break ;
		case FLOAT:
			break;
		case DOUBLE:
			break ;
		case DONE:
			this->_aschar = str[0] - 48;
			this->_asfloat = static_cast<float>(this->_aschar);
			this->_asdouble = static_cast<double>(this->_aschar);
			this->_asint = static_cast<int>(this->_aschar);
			break ;
		case NANUM:
			throw Caster::Problem();
	}
}

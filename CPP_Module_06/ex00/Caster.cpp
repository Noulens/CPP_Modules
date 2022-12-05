/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:53:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/05 12:31:58 by tnoulens         ###   ########.fr       */
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
	this->_hasnan = false;
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
	this->_hasnan = copy.getAsnan();
}

Caster &Caster::operator = (const Caster &assign)
{
	this->_aschar = assign.getAsChar();
	this->_asint = assign.getAsInt();
	this->_asfloat = assign.getAsFloat();
	this->_asdouble = assign.getAsDouble();
	this->_hasof = assign.getHasOf();
	this->_hasnan = assign.getAsnan();
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

bool Caster::getAsnan() const
{
	return (this->_hasnan);
}

const char *Caster::Problem::what() const throw()
{
	return ("non");
}

std::ostream &operator << (std::ostream &out, const Caster &ok)
{
	out << "char: ";
	if (ok.getAsnan() || ok.getHasOf() || ok.getAsInt() > CHAR_MAX || ok.getAsInt() < CHAR_MIN)
	{
		out << "impossible\n";
	}
	else if (!std::isprint(ok.getAsChar()))
	{
		out << " Non displayable\n";
	}
	else
	{
		out << '\'' << ok.getAsChar() << "'\n";
	}
	out << "int: ";
	if (ok.getAsnan() || ok.getHasOf())
	{
		out << "impossible\n";
	}
	else
		out << ok.getAsInt() << '\n';
	out << "float: ";
	if (ok.getAsnan())
		out << ok.getAsFloat() << '\n';
	else
	{
		out << ok.getAsFloat();
		if (ok.getAsFloat() == ok.getAsInt())
			out << ".0f\n";
		else
			out << "f\n";
	}
	out << "double: ";
	if (ok.getAsnan())
		out << ok.getAsFloat();
	else
	{
		out << ok.getAsDouble();
		if (ok.getAsDouble() == ok.getAsInt())
			out << ".0";
	}
	out << '\n';
	return (out);
}

t_type Caster::checkFormat(std::string &str)
{
	size_t	len = str.length();
	size_t	i = 0;
	bool	comma = false;
	bool	f = false;

	if (len == 1 && str[0] != '0')
	{
		return (DONE);
	}
	else if (str == "nan")
		return (NAN);
	else if (str == "inf" || str == "-inf" || str == "inff" || str == "-inff")
		return (INF);
	else
	{
		if (str[i] == '+' || str[i] == '-')
			++i;
		if (str[len - 1] == 'f')
		{
			f = true;
			--len;
		}
		while (i < len)
		{
			if (std::isdigit(str[i]))
			{
				++i;
				continue;
			}
			else if (str[i] == '.')
			{
				if (comma == true)
					return (NANUM);
				else
					comma = true;
				++i;
			}
			else
				return (NANUM);
		}
		if (!comma && !f)
			return (INT);
		else if (comma)
		{
			if (f == true)
				return (FLOAT);
			else
				return (DOUBLE);
		}
	}
	return (NANUM);
}

void	Caster::doConversion(std::string &str, t_type &t)
{
	switch (t)
	{
		case INT:
			_asdouble = std::atof(str.c_str());
			if (_asdouble > 2147483647.0 || _asdouble < -2147483648.0)
			{
				_hasof = true;
				_asfloat = static_cast<float>(_asdouble);
			}
			else
			{
				_asint = std::atoi(str.c_str());
				_aschar = static_cast<char>(_asint);
				_asdouble = static_cast<double>(_asint);
				_asfloat = static_cast<float>(_asint);
			}
			break ;
		case FLOAT:
			_asfloat = std::atof(str.c_str());
			_asdouble = static_cast<double>(_asfloat);
			if (_asdouble > 2147483647.0 || _asdouble < -2147483648.0)
				_hasof = true;
			else
			{
				_asint = static_cast<int>(_asfloat);
				_aschar = static_cast<char>(_asfloat);
			}
			break;
		case DOUBLE:
			_asfloat = std::atof(str.c_str());
			_asdouble = static_cast<double>(_asfloat);
			if (_asfloat > 2147483647.0 || _asfloat < -2147483648.0)
				_hasof = true;
			else
			{
				_asint = static_cast<int>(_asfloat);
				_aschar = static_cast<char>(_asfloat);
			}
			break ;
		case NAN:
			_hasnan = true;
			_asdouble = std::numeric_limits<double>::quiet_NaN();
			_asfloat = std::numeric_limits<float>::quiet_NaN();
			break ;
		case INF:
			_hasof = true;
			if (str[0] == '-')
			{
				_asdouble = -1 * std::numeric_limits<double>::infinity();
				_asfloat = -1 * std::numeric_limits<float>::infinity();
			}
			else
			{
				_asdouble = std::numeric_limits<double>::infinity();
				_asfloat = std::numeric_limits<float>::infinity();
			}
			break;
		case NANUM:
			throw Caster::Problem();
		case DONE:
			this->_aschar = str[0];
			this->_asfloat = static_cast<float>(this->_aschar);
			this->_asdouble = static_cast<double>(this->_aschar);
			this->_asint = static_cast<int>(this->_aschar);
			break ;
	}
}

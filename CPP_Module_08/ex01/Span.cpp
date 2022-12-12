/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:27:28 by waxxy             #+#    #+#             */
/*   Updated: 2022/12/12 22:27:34 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _SpanSize(0)
{

}

Span::~Span()
{
	if (_SpanSize > 0)
		_integers.empty();
}

Span::Span(unsigned int N): _SpanSize(N)
{

}

Span &Span::operator = (const Span &assign)
{
	this->_SpanSize = assign.getSize();
	this->_integers.clear();
	this->_integers.insert((this->_integers.end(), assign.getIntegers.begin(), assign.getIntegers.end());
	return (*this);
}

Span::Span(const Span &copy)
{
	this->_SpanSize = copy.getSize();
	this->_integers.clear();
	this->_integers.insert((this->_integers.end(), copy.getIntegers.begin(), copy.getIntegers.end());
	return (*this);
}

unsigned int	Span::shortestSpan(void) const
{

}

unsigned int	Span::longestSpan(void) const
{

}

void	Span::addNumber(unsigned int n)
{
	if (this->_integers.size() >= this->_SpanSize)
		throw (Span::SpanFull());
	this->_integers.push_back(n);
}

unsigned int	Span::getSize(void) const;
{
	return (this->_SpanSize);
}

std::vector<int>	Span::getIntegers(void)const
{
	return (this->_integers);
}

void	Span::addMany(std::vector<int>::iterator begin,	std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{
		this->addNumber(*it);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:29:44 by waxxy             #+#    #+#             */
/*   Updated: 2022/12/12 22:29:48 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/Span.hpp"

Span::Span(): _SpanSize(0)
{

}

Span::~Span()
{
	if (_SpanSize > 0)
		_integers.clear();
}

Span::Span(unsigned int N): _SpanSize(N)
{

}

Span &Span::operator = (const Span &assign)
{
	this->_SpanSize = assign.getSize();
	this->_integers.clear();
	this->_integers.insert(this->_integers.end(), assign.getIntegers().begin(), assign.getIntegers().end());
	return (*this);
}

Span::Span(const Span &copy)
{
	this->_SpanSize = copy.getSize();
	this->_integers.clear();
	this->_integers.insert(this->_integers.end(), copy.getIntegers().begin(), copy.getIntegers().end());
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_integers.size() == 1 || this->_integers.empty())
		throw(Span::SpanEmpty());
	std::sort(_integers.begin(), _integers.end());
	std::vector<int>::const_iterator it = this->_integers.begin();
	int	i = 0;
	int	ret = INT_MAX;
	while (it != this->_integers.end())
	{
		if (this->_integers[i + 1] - this->_integers[i] < ret && this->_integers[i + 1] - this->_integers[i] >=0)
			ret = this->_integers[i + 1] - this->_integers[i];
		++i;
		++it;
	}
	return (ret);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_integers.size() == 1 || this->_integers.empty())
		throw(Span::SpanEmpty());
	std::sort(this->_integers.begin(), this->_integers.end());
	return (this->_integers[this->_integers.size() - 1] - this->_integers[0]);
}

void	Span::addNumber(unsigned int n)
{
	if (this->_integers.size() >= this->_SpanSize)
		throw (Span::SpanFull());
	this->_integers.push_back(n);
}

unsigned int	Span::getSize(void) const
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

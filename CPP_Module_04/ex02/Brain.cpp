/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:50:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 16:44:58 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.h"

Brain::Brain()
{
	this->ideas[99] = "out of brain zone";
	std::cout << RED << "Brain" << RESET << ": default constructor called\n";
}

Brain::~Brain()
{
	std::cout << RED << "Brain" << RESET << ": destructor called\n";
}

Brain &Brain::operator = (const Brain &src)
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << RED << "Brain" << RESET << ": assignment operator called\n";
	return (*this);
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << RED << "Brain" << RESET << ": copy constructor called\n";
}

std::string const &Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	else
		return (this->ideas[99]);
}

void Brain::setIdeas(int i, std::string id)
{
	if (i >= 0 && i < 100)
		ideas[i] = id;
	else
		std::cout << "out of brain zone\n";
}

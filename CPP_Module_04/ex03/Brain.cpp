/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:50:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/27 13:48:10 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.h"

Brain::Brain()
{
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

std::string Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
		return (ideas[i]);
	else
		return ("OOBZ");
}

void Brain::setIdeas(int i, std::string id)
{
	if (i >= 0 && i < 100)
		ideas[i] = id;
	else
		std::cout << "OOBZ\n";
}

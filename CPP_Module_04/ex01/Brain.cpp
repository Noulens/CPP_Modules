/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:50:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 18:02:21 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "colors.h"

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain &Brain::operator = (const Brain &src)
{
	(void)src;
	return (*this);
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

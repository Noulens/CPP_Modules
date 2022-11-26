/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:50:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 17:24:22 by tnoulens         ###   ########.fr       */
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
	;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

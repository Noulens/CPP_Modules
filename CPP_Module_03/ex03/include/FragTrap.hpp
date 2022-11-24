/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:52:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:35:03 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__HPP__
# define __FRAGTRAP__HPP__

#include "colors.h"
#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap: public virtual ClapTrap
{
	private:
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy_from);
		~FragTrap();

		void	highFivesGuys(void);
};

#endif

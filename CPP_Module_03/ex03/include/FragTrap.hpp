/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:52:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:05:39 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP__HPP__
# define __FRAGTRAP__HPP__

#include "colors.h"
#include "ClapTrap.hpp"
#include <iostream>

class	FragTrap: public ClapTrap
{
	private:
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy_from);
		~FragTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);
};

#endif

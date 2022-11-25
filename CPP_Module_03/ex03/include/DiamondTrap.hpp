/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:28:31 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 20:17:39 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP__HPP__
# define __DIAMONDTRAP__HPP__

#include "colors.h"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy_from);
		DiamondTrap &operator=( DiamondTrap const & src );
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI(void);
};

#endif

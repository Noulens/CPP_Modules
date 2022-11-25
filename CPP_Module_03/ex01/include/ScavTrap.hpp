/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:24:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 17:23:15 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__HPP__
# define __SCAVTRAP__HPP__

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy_from);
		ScavTrap &operator=(ScavTrap const &src);
		~ScavTrap();

		void	guardGate(void);
};

#endif

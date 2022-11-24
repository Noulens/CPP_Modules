/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:24:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 19:34:43 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP__HPP__
# define __SCAVTRAP__HPP__

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
private:
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy_from);
	~ScavTrap();
	
	void	guardGate(void);
};

#endif

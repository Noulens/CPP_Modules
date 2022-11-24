/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:30:18 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/24 17:28:13 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP__HPP__
# define __CLAPTRAP__HPP__

#include <iostream>
#include <string>

class	ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energypoints;
		int			_attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();
		ClapTrap &operator = (const ClapTrap &assign);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	const &getName() const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:34 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/17 10:02:02 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__H__
# define __HUMANB__H__

# include <iostream>
# include "colors.h"
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanB();
		HumanB(std::string name, std::string weapon);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);
};

#endif

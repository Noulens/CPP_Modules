/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:38 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/17 09:48:16 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__H__
# define __HUMANA__H__

# include <iostream>
# include "colors.h"
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanA();
		HumanA(std::string name, std::string weapon);
		~HumanA();
		void	attack() const;
};

#endif

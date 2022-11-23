/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:25 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/23 21:33:58 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__H__
# define __WEAPON__H__

# include <iostream>
# include "colors.h"

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		void				setType(std::string type);
		std::string	const	&getType() const;
};

#endif

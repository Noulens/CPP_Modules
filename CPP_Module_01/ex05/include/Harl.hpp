/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:33:22 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/19 18:50:52 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__H__
#define __HARL__H__

#include "colors.h"
#include <iostream>

class	Harl
{
	private:
		typedef struct s_level
		{
			std::string	level;
			void		(Harl::*func)(void);
		}	t_level;

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		t_level	_levels[4];

	public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif

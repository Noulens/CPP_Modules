/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:22:45 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 16:30:57 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__H__
# define __ZOMBIE__H__

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "colors.h"
# include <cstdio>

class	Zombie
{
	private:
		std::string	_zname;
	public:
		Zombie();
		Zombie(std::string zname);
		~Zombie();

		void	annonce();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:22:45 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/16 17:26:02 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__H__
# define __ZOMBIE__H__

# include <iostream>
# include "colors.h"

class	Zombie
{
	private:
		std::string	_zname;
	public:
		Zombie();
		Zombie(std::string zname);
		~Zombie();

		void	annonce();
		void	set_name(std::string zname);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:08:53 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 17:40:04 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE__HPP__
# define __ICE__HPP__
# include <iostream>
# include <string>
# include "colors.h"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &copy);
		Ice &operator = (const Ice &copy);

		AMateria	*clone(const Ice &clonesrc);
		void		use(ICharacter &target);
};

#endif

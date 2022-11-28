/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:07:40 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 23:03:16 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE__HPP__
# define __CURE__HPP__
# include <iostream>
# include <string>
# include "colors.h"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &copy);
		Cure &operator = (const Cure &copy);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);	
};

#endif

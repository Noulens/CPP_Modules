/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:25:25 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 23:03:03 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA__HPP__
# define __AMATERIA__HPP__
# include <iostream>
# include <string>
# include "colors.h"
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();
		AMateria &operator = (const AMateria &copy);
		
		std::string			const &getType() const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif

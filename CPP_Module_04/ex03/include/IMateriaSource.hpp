/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:45:07 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 17:49:04 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE__HPP__
# define __IMATERIASOURCE__HPP__

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria	*createMateria(std::string const & type) = 0;
};

#endif


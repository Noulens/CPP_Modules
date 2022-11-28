/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:43:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 17:48:08 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE__HPP__
# define __MATERIASOURCE__HPP__

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	/* data */
public:
	MateriaSource();
	~MateriaSource();
	void		learnMateria(AMateria*);
	AMateria	*createMateria(std::string const & type);
};

#endif

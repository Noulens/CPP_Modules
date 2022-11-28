/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:43:10 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 23:06:16 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE__HPP__
# define __MATERIASOURCE__HPP__

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int			_learned;
		AMateria*	_template[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const AMateria &copy);
		MateriaSource	&operator = (const MateriaSource &assign);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const & type);
};

#endif

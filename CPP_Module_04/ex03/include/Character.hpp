/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:38:42 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/28 23:06:30 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER__HPP__
# define __CHARACTER__HPP__

# include "ICharacter.hpp"
# include <iostream>
# include <string>
# include "colors.h"

class Character: public ICharacter
{
	private:
		std::string		_name;
		int				_equipped;
		AMateria*		_inventory[4];
	public:
		Character();
		Character(const std::string &name);
		~Character();
		Character	&operator =  (const Character &assign);
		Character(const Character &copy);

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:35:28 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 17:55:05 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__HPP__
# define __CAT__HPP__

# include <string>
# include <iostream>
# include "colors.h"
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		~Cat();

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif

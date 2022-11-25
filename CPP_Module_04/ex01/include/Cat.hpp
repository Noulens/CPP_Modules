/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:35:28 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:35:32 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT__HPP__
# define __CAT__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "Animal.hpp"

class   Cat: public Animal
{
    public:
        Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &src);
        ~Cat();

        void        makeSound(void) const;
};

#endif

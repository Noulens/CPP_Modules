/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:35:03 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 13:50:47 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__HPP__
# define __ANIMAL__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "Brain.hpp"

class   Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &src);
        virtual ~Animal();

        std::string         getType(void) const;
        virtual void        makeSound(void) const;
        virtual Brain*      getBrain(void) const = 0;
};

#endif

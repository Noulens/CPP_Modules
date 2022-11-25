/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:35:03 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:35:10 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL__HPP__
# define __ANIMAL__HPP__

#include <string>
#include <iostream>
#include "colors.h"

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
};

#endif

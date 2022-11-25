/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:36:13 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:36:16 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__HPP__
# define __DOG__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "Animal.hpp"

class   Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &src);
        ~Dog();

        void        makeSound(void) const;
};

#endif

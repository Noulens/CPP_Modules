/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:36:24 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:36:30 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL__HPP__
# define __WRONGANIMAL__HPP__

#include <string>
#include <iostream>
#include "colors.h"

class   WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        WrongAnimal &operator=(const WrongAnimal &src);
        virtual ~WrongAnimal();

        std::string         getType(void) const;
        virtual void        makeSound(void) const;
};

#endif

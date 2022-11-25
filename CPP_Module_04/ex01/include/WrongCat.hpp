/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:36:37 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/25 20:36:39 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT__HPP__
# define __WRONGCAT__HPP__

#include <string>
#include <iostream>
#include "colors.h"
#include "WrongAnimal.hpp"

class   WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat &operator=(const WrongCat &src);
        ~WrongCat();

        void        makeSound(void) const;
};

#endif

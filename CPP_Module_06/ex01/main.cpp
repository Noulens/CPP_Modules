/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:45:59 by waxxy             #+#    #+#             */
/*   Updated: 2022/12/05 00:08:35 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t   serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data test = Data(350000);
    uintptr_t raw;

    std::cout << test << '\n';
    raw = serialize(&test);
    std::cout << raw << std::endl;
    Data *test2 = deserialize(raw);
    std::cout << *test2;
}

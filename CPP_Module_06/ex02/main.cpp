/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:45:59 by waxxy             #+#    #+#             */
/*   Updated: 2022/12/05 00:35:43 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base *generate(void)
{
    srand(time(0));

    int i = rand() % 3;

    if (i == 1)
        return (new A());
    else if (i == 2)
        return (new B());
    else
        return (new C());
}

void identify(Base *p)
{
    A *p1;
    B *p2;
    C *p3;

    p1 = dynamic_cast<A*>(p);
    if (p1)
        std::cout << "type est A" << std::endl;
    p2 = dynamic_cast<B *>(p);
    if (p2)
        std::cout << "type est B" << std::endl;
    p3 = dynamic_cast<C *>(p);
    if (p3)
        std::cout << "type est C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &p1 = dynamic_cast<A &>(p);
        (void)p1;
        std::cout << "type est A" << std::endl;
    }
    catch(...)
    {
    }
    try
    {
        B &p2 = dynamic_cast<B &>(p);
        (void)p2;
        std::cout << "type est B" << std::endl;
    }
    catch(...)
    {
    }
    try
    {
        C &p3 = dynamic_cast<C &>(p);
        (void)p3;
        std::cout << "type est C" << std::endl;
    }
    catch(...)
    {
    }

}

int main()
{
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
    return (0);
}

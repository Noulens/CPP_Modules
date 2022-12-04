/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:49:34 by waxxy             #+#    #+#             */
/*   Updated: 2022/12/04 23:57:26 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    _asint = 0;
}

Data::Data(const int asint)
{
    _asint = asint;
}

Data::~Data()
{
}

Data::Data(const Data &copy)
{
    _asint = copy.getAsInt();
}

Data &Data::operator=(const Data &assign)
{
    _asint = assign.getAsInt();
    return (*this);
}


int Data::getAsInt() const
{
    return (_asint);
}


std::ostream &operator<<(std::ostream &out, const Data &ok)
{
    out << "adresse: " << &ok << " int: " << ok.getAsInt();
    return (out);
}


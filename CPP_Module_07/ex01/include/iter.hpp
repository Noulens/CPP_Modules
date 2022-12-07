/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:42:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/07 20:22:49 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__HPP__
# define __ITER__HPP__

# include <iostream>

template <typename T> void iter(T *ok, size_t i, void (*func)(T &))
{
    for (size_t j = 0; j < i; ++j)
    {
        func(ok[j]);
    }
}

#endif

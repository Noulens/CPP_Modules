/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:42:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/07 19:58:05 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER__HPP__
# define __WHATEVER__HPP__

template <typename T> T const &max(T &x, T &y)
{
    return (x > y) ? x : y;
}

template <typename T> T const &min(T &x, T &y)
{
    return (y > x) ? x : y;
}

template <typename T> void swap(T &x, T &y)
{
    T temp = x;
	
	x = y;
	y = temp;
}

#endif

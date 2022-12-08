/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:16:19 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/08 15:16:51 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__HPP__
# define __EASYFIND__HPP__

# include <algorithm>
# include <list>
# include <vector>
# include <map>

class EasyFindError: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return("Value not found !\n");
		}
};

template <typename T>
typename T::const_iterator easyfind(const T & target, const int i)
{
	typename T::const_iterator	it;
	it = std::find(target.begin(), target.end(), i);
	if (it == target.end())
		throw EasyFindError();
	return(it);
}

#endif

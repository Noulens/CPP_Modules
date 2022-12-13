/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:58:28 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/13 15:58:29 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H_
# define MUTANTSTACK_H_

# include <stack>
# include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator	begin(void)
		{
			return (std::stack<T>::c.begin());
		}
		const_iterator	cbegin(void)
		{
			return (std::stack<T>::c.cbegin());
		}
		reverse_iterator rbegin(void)
		{
			return (std::stack<T>::c.rbegin());
		}
		const_reverse_iterator crbegin(void)
		{
			return (std::stack<T>::c.crbegin());
		}
		iterator	end(void)
		{
			return (std::stack<T>::c.end());
		}
		const_iterator	cend(void)
		{
			return (std::stack<T>::c.cend());
		}
		reverse_iterator rend(void)
		{
			return (std::stack<T>::c.rend());
		}
		const_reverse_iterator crend(void)
		{
			return (std::stack<T>::c.crend());
		}
};

#endif
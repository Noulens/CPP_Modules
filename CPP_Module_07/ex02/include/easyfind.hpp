/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:42:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/08 13:45:20 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__HPP__
# define __EASYFIND__HPP__

# include <iostream>

template <typename T>
class Easyfind
{
	private:
		T 		*_array;
		size_t	_len;
	public:
		Easyfind<T>();
		~Easyfind<T>();
		Easyfind<T>(const unsigned int &n);
		Easyfind<T>(const Easyfind &copy);
		Easyfind &operator = (const Easyfind &assign);
		T &operator [] (size_t idx) const;
		size_t	size(void) const;
};

template <typename T>
Easyfind<T>::Easyfind(): _array(NULL), _len(0)
{
}

template <typename T>
Easyfind<T>::~Easyfind()
{
	if (this->_len)
		delete[] this->_array;
}

template <typename T>
Easyfind<T>::Easyfind(const unsigned int &n): _len(n)
{
	this->_array = new T[n]();
}

template <typename T>
T	&Easyfind<T>::operator [] (size_t idx) const
{
	if (idx >= this->_len)
	{
		throw std::exception();
	}
	return (_array[idx]);
}

template <typename T>
Easyfind<T>::Easyfind(Easyfind<T> const  &copy)
{
	this->_array = new T[copy.size()]();
	this->_len = copy.size();
	for (size_t j = 0; j < this->_len; ++j)
	{
		this->_array[j] = copy[j];
	}
}

template <typename T>
Easyfind<T> &Easyfind<T>::operator = (const Easyfind<T> &assign)
{
	if (this->_len)
		delete[] this->_array;
	this->_array = new T[assign.size()]();
	this->_len = assign.size();
	for (size_t j = 0; j < this->_len; ++j)
	{
		this->_array[j] = assign[j];
	}
	return (*this);
}


template <typename T>
size_t	Easyfind<T>::size(void) const
{
	return (this->_len);
}

#endif

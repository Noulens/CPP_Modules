/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:42:26 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/07 22:16:35 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__HPP__
# define __ARRAY__HPP__

# include <iostream>

template <typename T>
class Array
{
	private:
		T 		*_array;
		size_t	_len;
	public:
		Array<T>();
		~Array<T>();
		Array<T>(const unsigned int &n);
		Array<T>(const Array &copy);
		Array &operator = (const Array &assign);
		T &operator [] (size_t idx) const;
		size_t	size(void) const;
};

template <typename T>
Array<T>::Array(): _array(NULL), _len(0)
{
}

template <typename T>
Array<T>::~Array()
{
	if (this->_len)
		delete[] this->_array;
}

template <typename T>
Array<T>::Array(const unsigned int &n): _len(n)
{
	this->_array = new T[n]();
}

template <typename T>
T	&Array<T>::operator [] (size_t idx) const
{
	if (idx >= this->_len)
	{
		throw std::exception();
	}
	return (_array[idx]);
}

template <typename T>
Array<T>::Array(Array<T> const  &copy)
{
	this->_array = new T[copy.size()]();
	this->_len = copy.size();
	for (size_t j = 0; j < this->_len; ++j)
	{
		this->_array[j] = copy[j];
	}
}

template <typename T>
Array<T> &Array<T>::operator = (const Array<T> &assign)
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
size_t	Array<T>::size(void) const
{
	return (this->_len);
}

#endif

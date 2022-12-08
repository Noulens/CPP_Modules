/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:43:15 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/08 17:04:02 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template< typename T > void	increment(T &arg)
{
	arg += 1;
}

int	main( void )
{
	int		array[100];
	char	str[12] = "Hello world";

	for (size_t i = 0; i < 100; i++)
	{
		array[i] = i;
	}
	{
		std::cout << *array << std::endl;
		std::cout << str << std::endl;
		std::cout << "iter + increment:" << std::endl;
		::iter<int>(array, 100, increment<int>);
		::iter<char>(str, 11, increment<char>);
		std::cout << *array << std::endl;
		std::cout << str << std::endl;
	}
	return (0);
}


template <typename T> void iter(T *ok, size_t i, void (*func)(T &))
{
    for (size_t j = 0; j < i; ++j)
    {
        func(ok[j]);
    }
}

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}

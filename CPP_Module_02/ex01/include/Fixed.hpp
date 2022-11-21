/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:18:24 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/21 21:39:21 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__HPP__
# define __FIXED__HPP__

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int					_fixed_value;
		static const int	_fractionnal_bit = 8;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &assigned);
		~Fixed();

		int		getRawBits(void) const; /* returns the raw value of the fixed-point value*/
		void	setRawBits(int const raw); /* sets the raw value of the fixed-point value*/
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &ok);

#endif

/*
 ---- Copy constructor

It is called when a new object is created from an existing object, as a copy of the existing object

It creates a separate memory block for the new object.

It is an overloaded constructor.

C++ compiler implicitly provides a copy constructor, if no copy constructor is defined in the class.

Syntax:

className(const className &obj) {

// body 

}

---- Assignment operator

This operator is called when an already initialized object is assigned a new value from another existing object.

It does not create a separate memory block or new memory space.

It is a bitwise operator.

A bitwise copy gets created, if the Assignment operator is not overloaded. 

Syntax: 

className obj1, obj2;

obj2 = obj1;

---- Example
// CPP Program to demonstrate the use of copy constructor
// and assignment operator
#include <iostream>
#include <stdio.h>
using namespace std;

class Test {
public:
    Test() {}
    Test(const Test& t)
    {
        cout << "Copy constructor called " << endl;
    }
 
    Test& operator=(const Test& t)
    {
        cout << "Assignment operator called " << endl;
        return *this;
    }
};
 
// Driver code
int main()
{
    Test t1, t2;
    t2 = t1; // t2 = t1 <=> t2.operator=(t1); assignment operator
    Test t3 = t1; // Test t3 = t1 <=> Test t3(t1); copy constructor
    getchar();
    return 0;
}
*/
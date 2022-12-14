/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:18:24 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/22 17:52:58 by waxxy            ###   ########.fr       */
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
		// Constructor
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		//Copy constructor
		Fixed(const Fixed &copy);
		// destructor
		~Fixed();
		//Operator overload
		Fixed &operator = (const Fixed &assigned);
		Fixed &operator ++ (void);
		Fixed &operator -- (void);
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed operator+(const Fixed &operated_with);
		Fixed operator-(const Fixed &operated_with);
		Fixed operator*(const Fixed &operated_with);
		Fixed operator/(const Fixed &operated_with);
		bool operator == (const Fixed &compared_to) const;
		bool operator != (const Fixed &compared_to) const;
		bool operator < (const Fixed &compared_to) const;
		bool operator > (const Fixed &compared_to) const;
		bool operator <= (const Fixed &compared_to) const;
		bool operator >= (const Fixed &compared_to) const;
		//Overloaded member functions
		static Fixed	&min(Fixed &obj1, Fixed &obj2);
		static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);
		static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
		//Member functions
		int		getRawBits(void) const; /* returns the raw value of the fixed-point value*/
		void	setRawBits(int const raw); /* sets the raw value of the fixed-point value*/
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &ok);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:18:24 by waxxy             #+#    #+#             */
/*   Updated: 2022/11/21 21:48:11 by waxxy            ###   ########.fr       */
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

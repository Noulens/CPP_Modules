/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:44:18 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/04 23:53:04 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA__HPP__
# define __DATA__HPP__

# include <iostream>
# include <string>

class	Data
{
	private:
		int		_asint;

	public:
		Data();
		~Data();
		Data(const int asint);
		Data(const Data &copy);
		Data &operator = (const Data &assign);

		int		getAsInt() const;
};

std::ostream &operator << (std::ostream &out, const Data &ok);

#endif

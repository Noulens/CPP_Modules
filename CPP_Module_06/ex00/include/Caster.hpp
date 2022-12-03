/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:44:18 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/03 15:57:53 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CASTER__HPP__
# define __CASTER__HPP__

# include <iostream>
# include <string>
# include <limits>
# include <sstream>
# include <iomanip>
# include "cpp06.hpp"

class	Caster
{
	private:
		char	_aschar;
		int		_asint;
		float	_asfloat;
		double	_asdouble;
		bool	_hasof;
	public:
		Caster();
		~Caster();
		Caster(const Caster &copy);
		Caster &operator = (const Caster &assign);

		/* Problem */
		class Problem: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		void	doString(std::string const &arg);
		char	getAsChar() const;
		int		getAsInt() const;
		float	getAsFloat() const;
		double	getAsDouble() const;
		bool	getHasOf() const;
		t_type		checkFormat(std::string &str);
		void	doConversion(std::string &str, t_type &t);
};

std::ostream &operator << (std::ostream &out, const Caster &ok);

#endif

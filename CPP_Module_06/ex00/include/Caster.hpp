/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:44:18 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/02 20:04:33 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CASTER__HPP__
# define __CASTER__HPP__

# include <iostream>
# include <string>
# include <limits>

class	Caster
{
	private:
		char	_aschar;
		int		_asint;
		float	_asfloat;
		double	_asdouble;
	public:
		Caster();
		~Caster();
		Caster(const Caster &copy);
		Caster &operator = (const Caster &assign);

		char	getAsChar() const;
		int		getAsInt() const;
		float	getAsFloat() const;
		double	getAsDouble() const;
};

#endif

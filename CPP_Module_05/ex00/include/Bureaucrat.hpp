/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:59:25 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/29 17:03:19 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__HPP__
# define __BUREAUCRAT__HPP__

# include "colors.h"
# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		
	public:
		Bureaucrat();
		~Bureaucrat();
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &ok);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:51:03 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/26 18:14:48 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN__HPP__
# define __BRAIN__HPP__

# include <iostream>
# include <string>

class Brain
{
	private:
	public:
		Brain();
		~Brain();
		Brain &operator = (const Brain &src);
		Brain(const Brain &src);
		
		std::string	ideas[100];
};

#endif

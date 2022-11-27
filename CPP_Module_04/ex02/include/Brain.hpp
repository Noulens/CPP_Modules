/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:51:03 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/27 12:58:06 by waxxy            ###   ########.fr       */
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
		std::string	getIdeas(int i) const;
		void		setIdeas(int i, std::string id);
};

#endif

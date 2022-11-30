/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrebberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:30:47 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 19:38:46 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHREBBERYCREATIONFORM__HPP__
# define __SHREBBERYCREATIONFORM__HPP__

#include "colors.h"
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class	ShrebberyCreationForm: public Form
{
	private:
	public:
		void	execute(const std::string &target);
};

#endif

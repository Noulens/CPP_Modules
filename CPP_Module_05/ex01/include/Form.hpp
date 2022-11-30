/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:35:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 17:03:15 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__HPP__
# define __FORM__HPP__

# include <iostream>
# include <string>
# include "colors.h"
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_clearance;
		const int			_execute_clearance;
	public:
		Form();
		~Form();
		Form(const std::string name, const int sign, const int exec);
		Form(const Form &copy);
		Form	&operator = (const Form &assign);

		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getSignedClearance() const;
		int					getExecuteClearance() const;
		void				beSigned(const Bureaucrat &ok);
		
		
		/* grade too high exception */
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form: The grade is too high");
				}
		};

		/* grade too low exeception */
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw ()
				{
					return ("Form: The grade is too low");
				}
		};
};

std::ostream &operator << (std::ostream &out, const Form &ok);

#endif

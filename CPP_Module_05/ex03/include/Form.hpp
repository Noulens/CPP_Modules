/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:35:00 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 13:15:10 by tnoulens         ###   ########.fr       */
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
		virtual ~Form();
		Form(const std::string name, const int sign, const int exec);
		Form(const Form &copy);
		Form	&operator = (const Form &assign);

		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getSignedClearance() const;
		int					getExecuteClearance() const;
		void				beSigned(const Bureaucrat &ok);

		virtual void		form_exec(const Bureaucrat &executor) const = 0;
		virtual void		execute(Bureaucrat const & executor) const;
		
		/* grade too high exception */
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		/* grade too low exeception */
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw ();
		};
			/* not sign exeception */
		class FormNotSign: public std::exception
		{
			public:
				virtual const char *what() const throw ();
		};
};

std::ostream &operator << (std::ostream &out, const Form &ok);

#endif

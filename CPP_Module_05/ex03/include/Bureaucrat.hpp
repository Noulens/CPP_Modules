/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:59:25 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 15:14:37 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT__HPP__
# define __BUREAUCRAT__HPP__

# include "colors.h"
# include <iostream>
# include <string>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator = (const Bureaucrat &assign);

		std::string	getName() const;
		int			getGrade() const;
		void		promote();
		void		demote();
		void		signForm(Form &ok) const;
		void		executeForm(Form const &form);

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
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &ok);

#endif

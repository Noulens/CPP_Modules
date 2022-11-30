/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:59:25 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 16:22:26 by tnoulens         ###   ########.fr       */
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

		/* grade too high exception */
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("The grade is too high");
				}
		};

		/* grade too low exeception */
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw ()
				{
					return ("The grade is too low");
				}
		};
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &ok);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:36:45 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 14:55:31 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name(BOLD_WHITE "laissez-passer A38" RESET), _sign_clearance(150), _execute_clearance(150)
{
	this->_is_signed = false;
	std::cout << "Form std constructed \n";
}

Form::Form(const std::string name, const int sign, const int exec): _name(name), _sign_clearance(sign), _execute_clearance(exec)
{
	this->_is_signed = false;
	std::cout << "Form parameterized constructed \n";
}

Form::~Form()
{
	std::cout << "Form destroyed \n";
}

Form::Form(const Form &copy): _name(copy.getName()), _sign_clearance(copy.getSignedClearance()), _execute_clearance(copy.getExecuteClearance())
{
	this->_is_signed = copy.getIsSigned();
	std::cout << "Form copy constructed \n";
}

Form	&Form::operator = (const Form &assign)
{
	this->_is_signed = assign.getIsSigned();
	std::cout << "Form assign constructed \n";
	return(*this);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool			Form::getIsSigned() const
{
	return (this->_is_signed);
}

int			Form::getSignedClearance() const
{
	return (this->_sign_clearance);
}

int			Form::getExecuteClearance() const
{
	return (this->_execute_clearance);
}

void	Form::beSigned(const Bureaucrat &ok)
{
	try
	{
		if (ok.getGrade() > this->getSignedClearance())
		{
			ok.signForm(*this);
			throw Form::GradeTooLowException();
		}
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
		return ;
	}
	this->_is_signed = true;
	ok.signForm(*this);
}

std::ostream	&operator << (std::ostream &out, const Form &ok)
{
	out << "Form name: " << ok.getName() << '\n';
	out << "Form clearance for signature: " << ok.getSignedClearance() << '\n';
	out << "Form clearance for execution: " << ok.getExecuteClearance() << '\n';
	if (ok.getIsSigned())
		out << "Form is signed" << '\n';
	else
		out << "Form is not signed" << '\n';
	return out;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->getExecuteClearance() < executor.getGrade())
		throw Form::GradeTooLowException();
	if (this->getIsSigned() == false)
		throw Form::FormNotSign();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form: The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw ()
{
	return ("Form: The grade is too low");
}

const char *Form::FormNotSign::what() const throw ()
{
	return ("Form: it is not signed");
}

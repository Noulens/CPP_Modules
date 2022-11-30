/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:53:52 by tnoulens          #+#    #+#             */
/*   Updated: 2022/11/30 16:23:55 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(WHITE "just another brick in the wall" RESET), _grade(150)
{
	std::cout << "std constructor called for " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name): _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		this->_grade = grade;
	}
	std::cout << "parameterized constructor called for " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor: " << this->_name << " falls into oblivion" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName())
{
	this->_grade = copy.getGrade();
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &assign)
{
	this->_grade = assign.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::promote()
{
	if (this->getGrade() - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
	{
		--this->_grade;
	}
}

void	Bureaucrat::demote()
{
	if (this->getGrade() + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		++this->_grade;
	}
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &ok)
{
	out << ok.getName() + ", bureaucrat grade " << ok.getGrade();
	return (out);
}

void	Bureaucrat::signForm(Form &ok) const
{
	if (ok.getIsSigned())
		std::cout << this->getName() + " signed " + ok.getName() + '\n';
	else
		std::cout << this->getName() + " couldn't sign " + ok.getName() + '\n';
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:11:32 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 16:59:25 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->_formlib[0] = "RobotomyRequestForm";
	this->_formlib[1] = "PresidentialPardonForm";
	this->_formlib[2] = "ShrebberyCreationForm";
	std::cout << "Intern std called" << '\n';
}

Intern::Intern(const Intern &copy)
{
	this->_formlib[0] = copy._formlib[0];
	this->_formlib[1] = copy._formlib[1];
	this->_formlib[2] = copy._formlib[2];
	std::cout << "Intern copy called" << '\n';
}

Intern::~Intern()
{
	std::cout << "Intern is thrown into the void" << '\n';
}
Intern	&Intern::operator = (const Intern &assign)
{
	std::cout << "Intern assign called" << '\n';
	(void)assign;
	return (*this);
}

Form	*Intern::makeForm(const std::string nof, const std::string target)
{
	int	choice = -1;
	try
	{
		for (int i = 0; i < 3; ++i)
		{
			if (nof == this->_formlib[i])
			{
				choice = i;
				break ;
			}
		}
		switch (choice)
		{
		case 0:
			std::cout << "Intern creates " + nof << '\n';
			return (new RobotomyRequestForm(target));
		case 1:
			std::cout << "Intern creates " + nof << '\n';
			return (new PresidentialPardonForm(target));
		case 2:
			std::cout << "Intern creates " + nof << '\n';
			return (new ShrebberyCreationForm(target));
		default:
			throw (Intern::NoSuchForm());
		}
	}
	catch (Intern::NoSuchForm &e)
	{
		std::cout << PURPLE "Intern: " RESET << nof + ": " << e.what() << '\n';
	}
	return (NULL);
}

const char *Intern::NoSuchForm::what() const throw()
{
	return "No such form";
}

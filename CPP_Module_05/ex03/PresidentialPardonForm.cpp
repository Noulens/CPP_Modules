/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:39:03 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 15:44:46 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), _target("test")
{
	std::cout << "PPF std constructed \n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PPF param constructed \n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PPF destructed \n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy.getName(), copy.getSignedClearance(), copy.getExecuteClearance()), _target(copy.getTarget())
{
	std::cout << "PPF copy constructor \n";
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &assign)
{
	(void)assign;
	std::cout << "PPF assign \n";
	return (*this);
}

const std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::form_exec(const Bureaucrat &executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch(const Form::FormNotSign &g)
	{
		std::cout << g.what() << "\n";
		throw g;
	}
	catch(const Form::GradeTooLowException &g)
	{
		std::cout << g.what() << "\n";
		throw g;
	}
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << '\n';
}

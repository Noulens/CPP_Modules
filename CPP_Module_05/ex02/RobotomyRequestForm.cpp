/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:44:58 by tnoulens          #+#    #+#             */
/*   Updated: 2022/12/01 15:51:18 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), _target("test")
{
	std::cout << "RRF std constructed \n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RRF param constructed \n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RRF destructed \n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form(copy.getName(), copy.getSignedClearance(), copy.getExecuteClearance()), _target(copy.getTarget())
{
	std::cout << "RRF copy constructor \n";
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &assign)
{
	(void)assign;
	std::cout << "RRF assign \n";
	return (*this);
}

const std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::form_exec(const Bureaucrat &executor) const
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
	std::cout << "DJJIIIIIIIIIIIIIIIIIIIIIiiizzZZZIOOUUUUUUVVVVVvvvvvv...SPROTCH" << '\n';
	srand(time(0));
	if (rand() % 2)	
		std::cout << "OOPS! " << this->getTarget() << " is now as smart as a carrot." << '\n';
	else
		std::cout << this->getTarget() << " has been robotomized succesfully!" << '\n';
}

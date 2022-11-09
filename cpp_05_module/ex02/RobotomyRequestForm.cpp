/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:53:06 by mmago             #+#    #+#             */
/*   Updated: 2022/11/09 16:35:16 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45)
{

};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	this->target = target;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << BOLDGREEN "RobotomyRequestForm Copy constructor called" RESET << std::endl;
	*this = copy;
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& equals)
{
	std::cout << BOLDGREEN"RobotomyRequestForm Assignation operator called" RESET << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
};

void RobotomyRequestForm::execute() const
{
	std::cout << BOLDCYAN " BRZHZHZHHZH  BRZHZHZHZH " RESET << std::endl;

	std::srand((unsigned int)(time(NULL)));

	int	rand_num;

	rand_num = rand() % 2;
	if (rand_num == 0)
	{
		std::cout << BOLDCYAN << this->target <<
			RESET " has been robotomized." << std::endl;
	}
	else
		std::cout << BOLDYELLOW "Robotomy failed." << std::endl;
		throw	Form::GradeNotExecuteException();
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << BOLDRED "RobotomyRequestForm destructor called" RESET << std::endl;
};
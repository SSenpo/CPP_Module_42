/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:52:55 by mmago             #+#    #+#             */
/*   Updated: 2022/11/07 00:44:39 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5)
{

};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	this->target = target;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	std::cout << BOLDYELLOW "PresidentialPardonForm Copy constructor called" RESET << std::endl;
	*this = copy;
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& equals)
{
	std::cout << BOLDYELLOW "PresidentialPardonForm Assignation operator called" RESET << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
};

void PresidentialPardonForm::execute() const
{
	std::cout << BOLDYELLOW << this->target <<
		" has been pardoned by Zaphod Beeblebrox." RESET << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << BOLDRED "PresidentialPardonForm destructor called" RESET << std::endl;
};
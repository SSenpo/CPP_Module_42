/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:24:18 by senpo             #+#    #+#             */
/*   Updated: 2022/11/11 18:38:32 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	std::cout << BOLDGREEN"Intern constructor called" RESET << std::endl;
};

Intern& Intern::operator=(const Intern& copy){
	std::cout << BOLDGREEN"Intern Assignation operator called" RESET << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
};

Intern::Intern(const Intern &copy){
	std::cout << BOLDGREEN"Intern Copy constructor called" RESET << std::endl;
	*this = copy;
};

Form	*Intern::initShrubbery(const std::string &target) {
	return new ShrubberyCreationForm(target);
};

Form	*Intern::initRobotomy(const std::string &target) {
	return new RobotomyRequestForm(target);
};

Form	*Intern::initPresident(const std::string &target) {
	return new PresidentialPardonForm(target);
};

Form	*Intern::makeForm(const std::string &type, const std::string &target){
	Form			*new_form = NULL;
	int				count = -1;
	I_link			methods[3] = {
		&Intern::initRobotomy,
		&Intern::initPresident,
		&Intern::initShrubbery,
	};
	std::string		form_index[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	while (count < 3 and form_index[++count] != type) ;
	switch (count)
	{
	case 3:
		throw InvalidFormException();
		return NULL;

	default:
		new_form = (this->*methods[count])(target);
		return new_form;
	}
};

const char* Intern::InvalidFormException::what() const throw(){
	return(BOLDYELLOW"InternClass_Error: Intern can't create a form." RESET);
};

Intern::~Intern(){
	std::cout << BOLDRED"Intern destructor called" RESET << std::endl;
};

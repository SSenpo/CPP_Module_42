/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:03:39 by mmago             #+#    #+#             */
/*   Updated: 2022/11/05 18:45:44 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(){

};

Form::Form(const std::string newName, const int SignIt,
		const int ExecuteIt) : name( newName ), gradeToSignIt(SignIt),
		gradeToExecuteIt(ExecuteIt){
	this->formSigned = false;
	if (gradeToSignIt < 1 || gradeToExecuteIt < 1) {
		// std::cout << "Form -> "BOLDGREEN << this->name << ": ";
		throw GradeTooHighException();
	}
	if (gradeToSignIt > 150 || gradeToExecuteIt > 150) {
		// std::cout << "Form -> "BOLDGREEN << this->name << ": ";
		throw GradeTooLowException();
	}
	else {
		std::cout << BOLDGREEN"Form " << BOLDYELLOW << this->name << BOLDGREEN" named constructor called"RESET << std::endl;
	}
};

Form& Form::operator=(const Form& equals){
	std::cout << BOLDGREEN"Form Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
};

Form::Form(const Form &copy){
	std::cout << BOLDGREEN"Form Copy constructor called"RESET << std::endl;
	*this = copy;
};

void		Form::beSigned(Bureaucrat &bure){
	if (this->gradeToSignIt >= bure.getGrade()) {
		this->formSigned = true;
		std::cout << BOLDGREEN"Form be signed"RESET << std::endl;
	}
	else
		throw GradeTooLowException();
};

std::string	Form::getName() const{
	return name;
};

bool		Form::getFormSigned() const{
	return formSigned;
};

int			Form::getGradeToSign() const{
	return gradeToSignIt;
};

int			Form::getGradeToExecute() const{
	return gradeToExecuteIt;
};

const char* Form::GradeTooLowException::what() const throw(){
	return (BOLDYELLOW"FormClass_Error: grade too Low."RESET);
};

const char* Form::GradeTooHighException::what() const throw(){
	return (BOLDYELLOW"FormClass_Error: grade too High."RESET);
};

const char* Form::GradeNotSignException::what() const throw(){
	return (BOLDYELLOW"FormClass_Error: form not Sign."RESET);
};

Form::~Form(){
	std::cout << BOLDRED"Form "BOLDYELLOW << this->name << BOLDRED" destructor called"RESET << std::endl;
};

std::ostream &operator<<(std::ostream &out, const Form &form){
	out << GREEN << form.getName() << RESET" Form signed = "GREEN << form.getFormSigned() <<
		RESET << " grade to Sign It = "GREEN << form.getGradeToSign() << 
		RESET << " grade to Execute It = "GREEN << form.getGradeToExecute() << RESET <<
		"Is in status: " << (std::string)((form.getFormSigned()) ? ("true") : ("false")) << std::endl;
	out << "Is in status: " << (std::string)((form.getFormSigned()) ? ("true") : ("false")) << std::endl;

	return (out);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:40:48 by mmago             #+#    #+#             */
/*   Updated: 2022/10/29 16:59:49 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){

}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade) : name( newName ){
	if (newGrade < 1)
		throw GradeTooHighException();
	if (newGrade > 150)
		throw GradeTooLowException();
	else {
		this->grade = newGrade;
		std::cout << BOLDGREEN"Bureaucrat " << BOLDYELLOW << this->name << BOLDGREEN" named constructor called"RESET << std::endl;
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &equals){
	std::cout << BOLDGREEN"Bureaucrat Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	std::cout << BOLDGREEN"Bureaucrat Copy constructor called"RESET << std::endl;
	*this = copy;
}

void				Bureaucrat::setIncremet(){
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade--;
};

void				Bureaucrat::setDecrement(){
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade++;
};

std::string	Bureaucrat::getName() const{
	return (name);
};
int			Bureaucrat::getGrade() const{
	return (grade);
};

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return (BOLDBLACK"Error: grade > 150."RESET);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return (BOLDBLACK"Error: grade < 1."RESET);
}

Bureaucrat::~Bureaucrat(){
	std::cout << BOLDRED"Bureaucrat "BOLDYELLOW << this->name << BOLDRED" destructor called"RESET << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur){
	out << BOLDYELLOW << bur.getName() << BOLDCYAN" Bureaucrat grade "BOLDYELLOW << bur.getGrade() << RESET << std::endl;
	return (out);
};
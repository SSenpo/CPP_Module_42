/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:53:10 by mmago             #+#    #+#             */
/*   Updated: 2022/11/05 16:53:11 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){

};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
	std::cout << BOLDGREEN"ShrubberyCreationForm Copy constructor called"RESET << std::endl;
	*this = copy;
};

void execute(Bureaucrat const & executor) const;

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << BOLDRED"ShrubberyCreationForm "BOLDYELLOW << target << BOLDRED" destructor called"RESET << std::endl;
};
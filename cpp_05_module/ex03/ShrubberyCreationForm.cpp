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

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137)
{

};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	this->target = target;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	std::cout << BOLDGREEN "ShrubberyCreationForm Copy constructor called" RESET << std::endl;
	*this = copy;
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& equals)
{
	std::cout << BOLDGREEN"ShrubberyCreationForm Assignation operator called" RESET << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
};

void ShrubberyCreationForm::execute() const
{
	std::ofstream ofs;

	ofs.open(this->target + "_shrubbery", std::ofstream::trunc);
	if (ofs.is_open())
	{
		ofs << "                                                         ." << std::endl;
		ofs << "                                      .         ;  " << std::endl;
		ofs << "         .              .              ;%     ;;   " << std::endl;
		ofs << "           ,           ,                :;%  %;   " << std::endl;
		ofs << "            :         ;                   :;%;'     .,   " << std::endl;
		ofs << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
		ofs << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		ofs << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
		ofs << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		ofs << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		ofs << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		ofs << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
		ofs << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
		ofs << "                `@%.  `;@%.      ;@@%;         " << std::endl;
		ofs << "                  `@%%. `@%%    ;@@%;        " << std::endl;
		ofs << "                    ;@%. :@%%  %@@%;       " << std::endl;
		ofs << "                      %@bd%%%bd%%:;     " << std::endl;
		ofs << "                        #@%%%%%:;;" << std::endl;
		ofs << "                        %@@%%%::;" << std::endl;
		ofs << "                        %@@@%(o);  . '         " << std::endl;
		ofs << "                        %@@@o%;:(.,'         " << std::endl;
		ofs << "                    `.. %@@@o%::;         " << std::endl;
		ofs << "                       `)@@@o%::;         " << std::endl;
		ofs << "                        %@@(o)::;        " << std::endl;
		ofs << "                       .%@@@@%::;         " << std::endl;
		ofs << "                       ;%@@@@%::;.          " << std::endl;
		ofs << "                      ;%@@@@%%:;;;. " << std::endl;
		ofs << "                  ...;%@@@@@%%:;;;;,..    Gilo97" << std::endl;
		ofs.close();
	}
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << BOLDRED "ShrubberyCreationForm destructor called" RESET << std::endl;
};
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
		ofs << BOLDGREEN"                                                         ." << std::endl;
		ofs << "                   m                  .         ;  " << std::endl;
		ofs << "    mmago.      m       .  agmmagomma  ;%mmago;;   " << std::endl;
		ofs << "           ,      m    , mmagommagommag :;%  %;   " << std::endl;
		ofs << "  mm        : mmago   ;    magommago mmago:;%;'     .,   " << std::endl;
		ofs << "   ,.  mmago %;     %;    mmago   ;  mmago %;'mmag,;" << std::endl;
		ofs << " mma ; mmago ;%;  %%; mmago  ,     %;mmag;%; mma,%'" << std::endl;
		ofs << "      %; mmago %;%; mmag ,  ; mmago %;mm;%;mma,%;' " << std::endl;
		ofs << " mmago ;%;mmago %;  mmago ;%;  mmago % ;%; m,%;'" << std::endl;
		ofs << "     mma`%;.mmago;%;mmag %;'   mmago `;%%;.%;'" << std::endl;
		ofs << "    mmago`:;%.mmag;%%. %@;mmago   %; ;@%;%'" << std::endl;
		ofs << "            `:%;.mm:;bd%;       mma%;@%;'" << std::endl;
		ofs << "              `@%:.mm:;%.  mmago  ;@@%;'   " << std::endl;
		ofs << "                `@%.mm`;@%.mmago ;@@%;         " << std::endl;
		ofs << "                  `@%%.m`@%%mmag;@@%;        " << std::endl;
		ofs << "                    ;@%. :@%%mm%@@%;       " << std::endl;
		ofs << "                      %@bd%%%bd%%:;     " << std::endl;
		ofs << BOLDYELLOW"                        #@%%%%%:;;" << std::endl;
		ofs << "                        %@@%%%::;" << std::endl;
		ofs << "                        %@@@%(o);  . '         " << std::endl;
		ofs << "                        %@@@o%;:(.,'         " << std::endl;
		ofs << "                    `.. %@@@o%::;         " << std::endl;
		ofs << "                       `)@@@o%::;         " << std::endl;
		ofs << "                        %@@(o)::;        " << std::endl;
		ofs << "                       .%@@@@%::;         " << std::endl;
		ofs << "                       ;%@@@@%::;.          " << std::endl;
		ofs << "                      ;%@@@@%%:;;;. " << std::endl;
		ofs << "     mmago        ...;%@@@@@%%:;;;;,..    mmago" RESET << std::endl;
		ofs.close();
	}
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << BOLDRED "ShrubberyCreationForm destructor called" RESET << std::endl;
};
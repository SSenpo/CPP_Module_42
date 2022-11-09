/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:48:01 by senpo             #+#    #+#             */
/*   Updated: 2022/11/09 23:35:42 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl << "LET'S TEST THE INTERN!" << std::endl;

	Intern		someRandomIntern;
	Form*		rrf;
	Bureaucrat	bur("Rick", 50);
	Bureaucrat	bur2("Morty", 2);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	
	if (rrf)
	{
		std::cout << *rrf << std::endl;
		bur.signForm(*rrf);
		bur.executeForm(*rrf);
		bur2.executeForm(*rrf);
		delete rrf;
	}
	rrf = someRandomIntern.makeForm("shrubbery creation", "Greg");
	return 0;
}


// 	if (rrf)
// 	{
// 		std::cout << std::endl << *rrf << std::endl;
// 		bur.signForm(*rrf);
// 		bur.executeForm(*rrf);
// 		delete rrf;
// 	}
	
// 	rrf = someRandomIntern.makeForm("presidential pardon", "Marvin");

// 	if (rrf)
// 	{
// 		std::cout << std::endl << *rrf << std::endl;
// 		bur2.signForm(*rrf);
// 		bur2.executeForm(*rrf);
// 		delete rrf;
// 	}

// 	rrf = someRandomIntern.makeForm("mistake", "Marvin");

// 	if (rrf)
// 	{
// 		std::cout << std::endl << *rrf << std::endl;
// 		bur2.signForm(*rrf);
// 		bur2.executeForm(*rrf);
// 		delete rrf;
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	Intern		bob;
// 	Form		*form;
// 	Bureaucrat	karen("Karen", 50);

// 	// Test how all forms are created properly execpt for the last one
// 	try
// 	{
// 		form = bob.makeForm("robotomy request", "Alice");
// 		delete form;
// 		form = bob.makeForm("shrubbery creation", "Charlie");
// 		std::cout << "TEST1" << std::endl;
// 		delete form;
// 		form = bob.makeForm("presidential pardon", "David");
// 		delete form;
// 		form = bob.makeForm("random request", "Elisa");
// 		delete form;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "Caught exception: " << e.what() << std::endl;
// 	}

// 	// Test some Actions with available form
// 	std::cout << "------------------------------------" << std::endl;
// 	form = bob.makeForm("shrubbery creation", "Fred");
// 	form->beSigned(karen);
// 	karen.executeForm(*form);
// 	delete form;
// 	std::cout << "------------------------------------" << std::endl;
// 	form = bob.makeForm("presidential pardon", "Georgia");
// 	karen.signForm(*form);
// 	karen.executeForm(*form);
// 	delete form;
// 	return (0);
// }
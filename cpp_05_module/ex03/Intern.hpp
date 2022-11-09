/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:18:42 by senpo             #+#    #+#             */
/*   Updated: 2022/11/09 20:50:39 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# define RESET			"\033[0m"
# define BLACK			"\033[30m"				/* Black */
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */
# define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"		/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"		/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"		/* Bold White */

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Form;

class Intern
{
	public:

		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);

		Intern	&operator=(const Intern& equals);

		Form	*makeForm(std::string const &type, std::string const &target);

		class	InvalidFormException : public std::exception{
			public:
				const char* what() const throw();
		};

	private:

		typedef Form* (Intern:: * I_link)(std::string const &type);
		
		Form	*initPresident(std::string const &target);
		Form	*initRobotomy(std::string const &target);
		Form	*initShrubbery(std::string const &target);
};

#endif
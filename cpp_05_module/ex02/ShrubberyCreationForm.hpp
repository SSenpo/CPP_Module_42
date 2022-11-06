/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:53:12 by mmago             #+#    #+#             */
/*   Updated: 2022/11/05 16:53:16 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include "Bureaucrat.hpp"

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

class	Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		virtual ~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};

#endif
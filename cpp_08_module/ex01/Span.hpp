/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:03:20 by senpo             #+#    #+#             */
/*   Updated: 2022/11/16 19:39:19 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>

class Span {
	public:
		Span(unsigned int num);
		Span(const Span& copy);
		~Span();

		Span& operator=(const Span& equals);

		void addNumber(int n);
		void addSequence(std::vector<int>::iterator start,
			std::vector<int>::iterator end);
		
		unsigned int longestSpan();
		unsigned int shortestSpan();
		
	private:
		unsigned int		size;
		std::vector<int>	collection;
		Span();
};
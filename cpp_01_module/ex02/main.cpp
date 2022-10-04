/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:21 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:21:11 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS STR";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "---------------------------------------------";

	std::cout << "\nMemory address \"string\"    -> " << &str  << std::endl;
	std::cout << "Memory address \"stringPTR\" -> " << &stringPTR  << std::endl;
	std::cout << "Memory address \"stringREF\" -> " << &stringREF << std::endl;

	std::cout << "---------------------------------------------";

	std::cout << "\nValue string    -> " << str  << std::endl;
	std::cout << "Value stringPTR -> " << stringPTR  << std::endl;
	std::cout << "Value stringREF -> " << stringREF << std::endl;

	std::cout << "---------------------------------------------\n";

	return (0);
}
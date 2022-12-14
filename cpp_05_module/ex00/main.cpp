/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:40:55 by mmago             #+#    #+#             */
/*   Updated: 2022/11/11 18:14:31 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// Bureaucrat Mark("Mark", 140);
		Bureaucrat Mark("Mark", 1403456);
		Mark.setDecrement();
		std::cout << Mark;
	}
	catch (std::exception &M)
	{
		std::cerr << M.what() << std::endl;
	}

	Bureaucrat Elton("Elton", 2);
	std::cout << Elton;

	Elton.setIncremet();
	std::cout << Elton;

	try
	{
		Elton.setIncremet();
	}
	catch (std::exception &E)
	{
		std::cerr << E.what() << std::endl;
	}
	std::cout << Elton;
	return (0);
}
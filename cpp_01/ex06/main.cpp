/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:37 by mmago             #+#    #+#             */
/*   Updated: 2022/09/05 17:15:40 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	Cat;

	if (ac < 2)
	{
		std::cout << RED"Wrong number of argument's\n"RESET;
		return (-1);
	}
	Cat.complain(std::string(av[1]));
	return 0; 
}
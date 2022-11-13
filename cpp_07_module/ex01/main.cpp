/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:45:35 by senpo             #+#    #+#             */
/*   Updated: 2022/11/13 17:03:36 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	int			arrOne[] = {7, 23, 55, 196, 342};
	std::string arrTwo[] = {"Obevan", "Luce", "Lea",
		"Dart Moll", "Meys Windows", "Dart Sidius",
		"Domenic Toretto"};

    std::cout << BOLDGREEN
    ".--------------------------------------------.\n\n"
	BOLDMAGENTA;

	std::cout << BOLDGREEN "arrOne: \n\n" BOLDMAGENTA;
	iter(arrOne, 5, coutValue<int>);
	std::cout << BOLDGREEN "\narrTwo: \n\n" BOLDMAGENTA;
	iter(arrTwo, 7, coutValue<std::string>);

    std::cout << BOLDGREEN
    "\n.--------------------------------------------.\n"
    BOLDMAGENTA;


	return 0;
}
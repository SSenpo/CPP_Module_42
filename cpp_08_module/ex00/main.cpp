/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:03:25 by senpo             #+#    #+#             */
/*   Updated: 2022/11/15 18:08:49 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	
	std::vector<int>			array;
	std::vector<int>::iterator	iter;

	for (int i = 0; i < 21; ++i) {
		array.push_back(i);
		std::cout << BOLDGREEN "push Value in array -> " RESET << i << std::endl;
	}
	
	try {
		std::cout << BOLDYELLOW "Search value -> 17" RESET << std::endl;
		iter = easyfind(array, 17);
		std::cout << BOLDGREEN "Value = " RESET << *iter << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		std::cout << BOLDYELLOW "Search value -> 21" RESET << std::endl;
		iter = easyfind(array, 21);
		std::cout << BOLDGREEN "Value = " RESET << *iter << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
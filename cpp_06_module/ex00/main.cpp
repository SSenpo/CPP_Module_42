/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:26:48 by senpo             #+#    #+#             */
/*   Updated: 2022/11/11 15:41:15 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/castHeader.hpp"

void	convertType(const std::string &str) {
	isChar(str);
	isInt(str);
	isFloat(str);
	isDouble(str);
}

int	main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "Wrong number of input arguments" << std::endl;
		return 1;
	}

	convertType(av[1]);

	return 0;
}
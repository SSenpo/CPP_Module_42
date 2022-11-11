/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isFloat.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:19:23 by senpo             #+#    #+#             */
/*   Updated: 2022/11/11 15:44:22 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/castHeader.hpp"

void	isFloat(const std::string &str) {
	std::cout << BOLDGREEN "float: " RESET;
	try {
		float num = static_cast<float>(std::stof(str));
		int n = num;
		if (num - (float)n == 0) {
			std::cout.precision(1);
		}
		std::cout << std::fixed;
		std::cout << num << "f\n";
	} catch (const std::invalid_argument& e) {
		std::cout << "impossible" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << std::numeric_limits<float>::infinity() << std::endl;
	}
}
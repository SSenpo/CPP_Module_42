/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isDouble.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:19:19 by senpo             #+#    #+#             */
/*   Updated: 2022/11/11 14:09:47 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/castHeader.hpp"

void	isDouble(const std::string &str) {
	std::cout << BOLDGREEN "double: " RESET;
	try {
		double d = static_cast<double>(std::stod(str));
		int n = d;
		if (d - (double)n == 0) {
			std::cout.precision(1);
		}
		std::cout << std::fixed;
		std::cout << d << std::endl;
	} catch (const std::invalid_argument& e) {
		std::cout << "impossible" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << std::numeric_limits<double>::infinity() << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isInt.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:19:28 by senpo             #+#    #+#             */
/*   Updated: 2022/11/11 15:39:49 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/castHeader.hpp"

void	isInt(const std::string &str) {
	std::cout << BOLDGREEN "int: " RESET;
	try {
		int num = static_cast<int>(std::stoi(str));
		std::cout << num << "\n";
	} catch (const std::invalid_argument& e) {
		std::cout << "impossible" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << "impossible" << std::endl;
	}
}
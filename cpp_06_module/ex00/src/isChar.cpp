/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isChar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 00:18:27 by senpo             #+#    #+#             */
/*   Updated: 2022/11/11 15:35:13 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/castHeader.hpp"

void	isChar(const std::string &str) {
	std::cout << BOLDGREEN "char: " RESET;
	try {
		int	num = std::stoi(str);
		if (!isascii(num))
		{
			std::cout << "Impossible\n";
		}
		else if (!isprint(num))
		{
			std::cout << "non displayable\n";
		}
		else {
			char symbol = static_cast<char>(num);
			std::cout << "'" << symbol << "'\n";
		}
		
	} catch (const std::invalid_argument& e) {
		std::cout << "impossible" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << "impossible" << std::endl;
	}
}
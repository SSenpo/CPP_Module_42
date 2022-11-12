/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:23:12 by senpo             #+#    #+#             */
/*   Updated: 2022/11/12 15:41:41 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"

int main() {
	std::cout << BOLDRED
		"------------------------------------------\n\n" RESET;
	Base *base = generate();
	identify(*base);
	identify(base);
	identify(nullptr);
	std::cout << BOLDRED
		"\n------------------------------------------" RESET << std::endl;
	return 0;
}
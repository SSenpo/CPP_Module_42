/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:26:15 by senpo             #+#    #+#             */
/*   Updated: 2022/11/12 15:38:14 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.hpp"

Base * generate(void) {
	Base *ptr;
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		std::cout << BOLDGREEN "Class A has been randomly generated" RESET << std::endl;
		ptr = new A();
		break;
	case 1:
		std::cout << BOLDGREEN "Class B has been randomly generated" RESET << std::endl;
		ptr = new B();
		break;
	case 2:
		std::cout << BOLDGREEN "Class C has been randomly generated" RESET << std::endl;
		ptr = new C();
		break;
	}
	return ptr;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << BOLDYELLOW "class type is A" RESET << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << BOLDYELLOW "class type is B" RESET << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << BOLDYELLOW "class type is C" RESET << std::endl;
	} else {
		std::cout << BOLDRED "Failed to identify class type" RESET << std::endl;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << BOLDCYAN "class type is A" RESET << std::endl;
		return ;
	} catch (const std::bad_cast& e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << BOLDCYAN "class type is B" RESET << std::endl;
		return ;
	} catch (const std::bad_cast& e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << BOLDCYAN "class type is C" RESET << std::endl;
		return ;
	} catch (const std::bad_cast& e) {
		std::cout << BOLDRED "Unknown type" RESET << std::endl;
	}
}
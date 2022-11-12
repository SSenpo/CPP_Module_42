/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:07:22 by senpo             #+#    #+#             */
/*   Updated: 2022/11/12 15:13:29 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data data = {"Aloha", 167822};
	uintptr_t uintptr;
	Data* dataPtr;

	std::cout  << std::endl << BOLDGREEN "Before SERIALISATION:" RESET << std::endl
		<< BOLDGREEN "Data address:         " RESET << &data << std::endl
		<< BOLDGREEN "username: " RESET << data.username << std::endl
		<< BOLDGREEN "password: " RESET << data.password << std::endl;
	
	uintptr = serialize(&data);
	std::cout << std::endl << BOLDRED "uintptr: " RESET << uintptr << std::endl;

	dataPtr = deserialize(uintptr);
	std::cout << std::endl << BOLDYELLOW "After SERIALISATION:" RESET << std::endl
		<< BOLDYELLOW "Data pointer address: " RESET << dataPtr << std::endl
		<< BOLDYELLOW "username: " RESET << dataPtr->username << std::endl
		<< BOLDYELLOW "password: " RESET << dataPtr->password << std::endl << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:43:15 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 16:23:09 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << BOLDGREEN"WrongAnimal Default constructor called"RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &equals){
	std::cout << BOLDGREEN"WrongAnimal Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << BOLDGREEN"WrongAnimal Copy constructor called"RESET << std::endl;
	*this = copy;
}

void	WrongAnimal::setType(const std::string &Type){
	this->type = Type;
}

std::string	WrongAnimal::getType(void) const{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const{
	std::cout << BOLDGREEN"WrongAnimal Sound"RESET << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << BOLDGREEN"WrongAnimal Destructor Called"RESET << std::endl;
}
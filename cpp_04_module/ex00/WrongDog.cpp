/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:02:36 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 16:20:16 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(){
	std::cout << BOLDYELLOW"WrongDog Default constructor called"RESET << std::endl;
	WrongDog::setType("WrongDog");
}

WrongDog& WrongDog::operator=(const WrongDog &equals){
	std::cout << BOLDYELLOW"WrongDog Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	return (*this);
}

WrongDog::WrongDog(const WrongDog &copy){
	std::cout << BOLDYELLOW"WrongDog Copy constructor called"RESET << std::endl;
	*this = copy;
}

void	WrongDog::setType(const std::string &Type){
	this->type = Type;
}

std::string	WrongDog::getType(void) const{
	return (this->type);
}

void	WrongDog::makeSound(void) const{
	std::cout << BOLDYELLOW"Wrong---AUF_AUF---"RESET << std::endl;
}

WrongDog::~WrongDog(){
	std::cout << BOLDYELLOW"WrongDog Destructor Called"RESET << std::endl;
}
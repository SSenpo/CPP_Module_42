/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:43:15 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 16:02:18 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << BOLDGREEN"ANIMAL Default constructor called"RESET << std::endl;
}

Animal& Animal::operator=(const Animal &equals){
	std::cout << BOLDGREEN"ANIMAL Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	return (*this);
}

Animal::Animal(const Animal &copy){
	std::cout << BOLDGREEN"ANIMAL Copy constructor called"RESET << std::endl;
	*this = copy;
}

void	Animal::setType(const std::string &Type){
	this->type = Type;
}

std::string	Animal::getType(void) const{
	return (this->type);
}

void	Animal::makeSound(void) const{
	std::cout << BOLDGREEN"ANIMAL Sound"RESET << std::endl;
}

Animal::~Animal(){
	std::cout << BOLDGREEN"ANIMAL Destructor Called"RESET << std::endl;
}
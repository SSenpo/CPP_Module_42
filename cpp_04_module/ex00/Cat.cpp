/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:56:16 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 16:03:26 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << BOLDCYAN"Cat Default constructor called"RESET << std::endl;
	Cat::setType("Cat");
}

Cat& Cat::operator=(const Cat &equals){
	std::cout << BOLDCYAN"Cat Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	return (*this);
}

Cat::Cat(const Cat &copy){
	std::cout << BOLDCYAN"Cat Copy constructor called"RESET << std::endl;
	*this = copy;
}

void	Cat::setType(const std::string &Type){
	this->type = Type;
}

std::string	Cat::getType(void) const{
	return (this->type);
}

void	Cat::makeSound(void) const{
	std::cout << BOLDCYAN"---UwU---"RESET << std::endl;
}

Cat::~Cat(){
	std::cout << BOLDCYAN"Cat Destructor Called"RESET << std::endl;
}
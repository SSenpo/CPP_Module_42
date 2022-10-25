/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:56:16 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 16:20:06 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << BOLDCYAN"WrongCat Default constructor called"RESET << std::endl;
	WrongCat::setType("WrongCat");
}

WrongCat& WrongCat::operator=(const WrongCat &equals){
	std::cout << BOLDCYAN"WrongCat Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &copy){
	std::cout << BOLDCYAN"WrongCat Copy constructor called"RESET << std::endl;
	*this = copy;
}

void	WrongCat::setType(const std::string &Type){
	this->type = Type;
}

std::string	WrongCat::getType(void) const{
	return (this->type);
}

void	WrongCat::makeSound(void) const{
	std::cout << BOLDCYAN"Wrong---UwU---"RESET << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << BOLDCYAN"WrongCat Destructor Called"RESET << std::endl;
}
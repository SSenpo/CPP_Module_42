/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:02:36 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 19:40:35 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << BOLDYELLOW"Dog Default constructor called"RESET << std::endl;
	Dog::setType("Dog");
	idea = new Brain();
}

Dog& Dog::operator=(const Dog &equals){
	std::cout << BOLDYELLOW"Dog Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	*this->idea = *equals.idea;
	return (*this);
}

Dog::Dog(const Dog &copy){
	std::cout << BOLDYELLOW"Dog Copy constructor called"RESET << std::endl;
	*this = copy;
}

void	Dog::setType(const std::string &Type){
	this->type = Type;
}

std::string	Dog::getType(void) const{
	return (this->type);
}

std::string	Dog::get_Dog(int num_Dog_Idea){
	return (idea->getIdeas(num_Dog_Idea));
}


void	Dog::makeSound(void) const{
	std::cout << BOLDYELLOW"---AUF_AUF---"RESET << std::endl;
}

Dog::~Dog(){
	std::cout << BOLDYELLOW"Dog Destructor Called"RESET << std::endl;
	delete idea;
}
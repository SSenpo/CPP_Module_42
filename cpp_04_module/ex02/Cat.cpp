/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:56:16 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 19:40:16 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << BOLDCYAN"Cat Default constructor called"RESET << std::endl;
	Cat::setType("Cat");
	idea = new Brain();
}

Cat& Cat::operator=(const Cat &equals){
	std::cout << BOLDCYAN"Cat Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->type = equals.type;
	*this->idea = *equals.idea;
	return (*this);
}

Cat::Cat(const Cat &copy){
	std::cout << BOLDCYAN"Cat Copy constructor called"RESET << std::endl;
	*this = copy;
}

void		Cat::setType(const std::string &Type){
	this->type = Type;
}

std::string	Cat::getType(void) const{
	return (this->type);
}

void		Cat::makeSound(void) const{
	std::cout << BOLDCYAN"---UwU---"RESET << std::endl;
}

std::string	Cat::get_Cat(int num_Cat_Idea){
	return (idea->getIdeas(num_Cat_Idea));
}

Cat::~Cat(){
	std::cout << BOLDCYAN"Cat Destructor Called"RESET << std::endl;
	delete idea;
}
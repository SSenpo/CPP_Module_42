/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:24:38 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 19:53:02 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << BOLDRED"Brain Default constructor called"RESET << std::endl;
}

Brain& Brain::operator=(const Brain &equals){
	std::cout << BOLDRED"Brain Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	for (int i = 0; i < 100 ; i++){
		this->ideas[i] = equals.ideas[i];
	}
	return (*this);
}

Brain::Brain(const Brain &copy){
	std::cout << BOLDRED"Brain Copy constructor called"RESET << std::endl;
	*this = copy;
}

std::string Brain::getIdeas(int numIdeas) const{
	try {
		return (ideas[numIdeas]);
	}
	catch(const std::exception& e) {
		std::cerr << e.what();
		return (e.what());
	}
}

Brain::~Brain(){
	std::cout << BOLDRED"Brain Destructor Called"RESET << std::endl;
}
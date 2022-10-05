/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:56:03 by mmago             #+#    #+#             */
/*   Updated: 2022/10/04 18:11:32 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << CYAN"FRAGTRAP Default constructor called"RESET << std::endl;
}

FragTrap::FragTrap(std::string clap_name) : ClapTrap(clap_name){
	_Name = clap_name;
	std::cout << "FRAGTRAP Named constructor called <" CYAN << clap_name << RESET ">" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy){
	std::cout << "FRAGTRAP Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &equals){
	std::cout << YELLOW"FRAGTRAP Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_hitPoints = equals._hitPoints;
	_energyPoints = equals._energyPoints;
	_attackDamage = equals._attackDamage;
	return (*this);
}

void	FragTrap::highFiveGuys(void){
	std::cout << BOLDGREEN"Positive high fives request"RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << RED<< "FRAGTRAP Destructor Called"RESET << std::endl;
}
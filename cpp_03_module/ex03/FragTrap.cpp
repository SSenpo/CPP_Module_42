/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:56:03 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 16:25:13 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << BOLDGREEN"FRAGTRAP Default constructor called"RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_Name = name;
	std::cout << "FRAGTRAP Named constructor called <" BOLDGREEN << name << RESET ">" << std::endl;
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttakDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy){
	std::cout << BOLDGREEN"FRAGTRAP Copy constructor called"RESET << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &equals){
	std::cout << BOLDGREEN"FRAGTRAP Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void	FragTrap::highFiveGuys(void){
	std::cout << BOLDGREEN"Positive high fives request"RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << BOLDGREEN<< "FRAGTRAP Destructor Called"RESET << std::endl;
}
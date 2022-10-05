/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:30:52 by mmago             #+#    #+#             */
/*   Updated: 2022/10/04 17:41:11 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << CYAN"Default ScavTrap constructor called"RESET << std::endl;
}

ScavTrap::ScavTrap(std::string clap_name) : ClapTrap(clap_name){
	std::cout << CYAN"Named ScavTrap constructor called"RESET<< std::endl;
}

ScavTrap::ScavTrap(const ClapTrap &copy){
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &equals){
	std::cout << YELLOW"ScavTrap Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_hitPoints = equals._hitPoints;
	_energyPoints = equals._energyPoints;
	_attackDamage = equals._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << BOLDBLUE"ScavTrav is now in Gate Keeper mode"RESET << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << RED<< "ScavTrap Destructor Called"RESET << std::endl;
}
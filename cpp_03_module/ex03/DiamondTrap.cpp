/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:43:14 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 16:22:33 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(),  FragTrap(), ScavTrap(){
    _Hitpoints = FragTrap::_Hitpoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttakDamage = FragTrap::_AttakDamage;
    std::cout << RED"Default constructor DiamondTrap called"RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name, 50){
    ClapTrap::_Name = name + "_clap_name";
    _name = name;
    _Hitpoints = FragTrap::_Hitpoints;
    _AttakDamage = FragTrap::_AttakDamage;
    std::cout << RED"Name constructor DiamondTrap called"RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
	std::cout << "copy DiamondTrap constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(){
    std::cout << BOLDRED"Destructor DiamondTrap called"RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &equals){
    std::cout << RED"Assignation DiamondTrap operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	_name = equals._name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name: " << RED << _name << RESET << std::endl;
    std::cout << "ClapTrap name: " << YELLOW << ClapTrap::_Name << RESET<< std::endl;
}

void DiamondTrap::attack(std::string const &target){
    ScavTrap::attack(target);
}
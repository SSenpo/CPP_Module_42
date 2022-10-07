/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:30:52 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 16:24:47 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << BOLDCYAN"Default ScavTrap constructor called"RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << BOLDCYAN"Name ScavTrap constructor called"RESET << std::endl;
	_Name = name;
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttakDamage = 20;
}


ScavTrap::ScavTrap(std::string name, int energy) : ClapTrap(name){
	std::cout << BOLDCYAN"Name ScavTrap constructor called"RESET << std::endl;
	_Name = name;
	_Hitpoints = 100;
	_EnergyPoints = energy;
	_AttakDamage = 20;
}

void ScavTrap::attack(std::string const & target){
	if (_EnergyPoints > 0){
		std::cout << BOLDCYAN << _Name << " attack " << target << ", causing " << _AttakDamage << " points of damage!"RESET << std::endl;
		_EnergyPoints--;
	}
	else
		std::cout << BOLDCYAN << _Name << " not enough attack points "RESET << target << std::endl;
}


ScavTrap::~ScavTrap(){
	std::cout << BOLDCYAN"Destructor ScavTrap called"RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	std::cout << BOLDCYAN"copy ScavTrap constructor called"RESET << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &equals){
	std::cout << BOLDCYAN"Assignation ScavTrap operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void ScavTrap::guardGate(){
	std::cout << BOLDCYAN"ScavTrap have enterred in Gate keeper mode."RESET << std::endl;
}
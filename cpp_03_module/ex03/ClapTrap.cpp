/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 06:35:59 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 16:23:25 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	_Name = "Default_CLAP";
	std::cout << "Default constructor called <" YELLOW << _Name << RESET ">" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	_Name = name;
	std::cout << "Named constructor called <" YELLOW << name << RESET ">" << std::endl;
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttakDamage = 20;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &equals){
	std::cout << YELLOW"Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (_Hitpoints > 0 && _EnergyPoints > _AttakDamage)
	{
		std::cout << YELLOW << _Name << RESET << " attack " << YELLOW << target << RESET
				<< ", causing " << YELLOW << _AttakDamage << RESET << " points of damage!" << std::endl;
		_EnergyPoints -= _AttakDamage;
	}
	else if (_Hitpoints <= 0)
		std::cout << YELLOW << _Name << " -> DIED"RESET << std::endl;
	else
		std::cout << YELLOW << _Name << RESET" can't attack target"
				<< YELLOW" [NO ENERGY]"RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << YELLOW << _Name << RESET" received " << YELLOW << amount
			<< RESET" points of damage" << std::endl;
	if (amount >= _Hitpoints)
	{
		std::cout << YELLOW << _Name << " -> die."RESET << std::endl;
		_Hitpoints = 0;
	}
	else
		_Hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_Hitpoints > 0 && _EnergyPoints >= amount)
	{
		std::cout << YELLOW << _Name << RESET << " recovers " << YELLOW << amount
				<< RESET" HP " << std::endl;
		_EnergyPoints -= amount;
		_Hitpoints += amount;
	}
	else if (_Hitpoints <= 0)
		std::cout << YELLOW << _Name << " -> DIED"RESET << std::endl;
	else
		std::cout << YELLOW << _Name << RESET" can't recover" << std::endl;
}

std::string	ClapTrap::getName(void){
	return (_Name);
}

unsigned int	ClapTrap::getHitpoints(void){
	return (_Hitpoints);
}

unsigned int	ClapTrap::getEnergypoints(void){
	return (_EnergyPoints);
}

unsigned int	ClapTrap::getAttackdamage(void){
	return (_AttakDamage);
}

ClapTrap::~ClapTrap(){
	std::cout << YELLOW<< "<" << _Name << "> Destructor Called"RESET << std::endl;
}
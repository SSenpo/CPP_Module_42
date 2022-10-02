/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 06:35:59 by mmago             #+#    #+#             */
/*   Updated: 2022/10/02 11:04:16 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->_Name = "Default_CLAP";
	std::cout << "Default constructor called <" CYAN << _Name << RESET ">" << std::endl;
}

ClapTrap::ClapTrap(std::string clap_name){
	this->_Name = clap_name;
	std::cout << "Named constructor called <" CYAN << clap_name << RESET ">" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 4;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &equals){
	std::cout << YELLOW"Assignation operator called"RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->_Name = equals._Name;
	this->_hitPoints = equals._hitPoints;
	this->_energyPoints = equals._energyPoints;
	this->_attackDamage = equals._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (this->_hitPoints > 0 && this->_energyPoints > this->_attackDamage)
	{
		std::cout << BOLDGREEN << this->_Name << RESET << " attack " << BOLDGREEN << target << RESET
				<< ", causing " << RED << this->_attackDamage << RESET << " points of damage!" << std::endl;
		this->_energyPoints -= this->_attackDamage;
	}
	else if (this->_hitPoints <= 0)
		std::cout << BOLDRED << this->_Name << " -> DIED"RESET << std::endl;
	else
		std::cout << BOLDGREEN << this->_Name << RESET" can't attack target"
				<< BOLDYELLOW" [NO ENERGY]"RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << BOLDGREEN << this->_Name << RESET" received " << RED << amount
			<< RESET" points of damage" << std::endl;
	if (amount >= this->_hitPoints)
	{
		std::cout << BOLDGREEN << this->_Name << RED" -> die."RESET << std::endl;
		this->_hitPoints = 0;
	}
	else
		this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitPoints > 0 && this->_energyPoints >= amount)
	{
		std::cout << BOLDGREEN << this->_Name << RESET << " recovers " << CYAN << amount
				<< RESET" HP " << std::endl;
		this->_energyPoints -= amount;
		this->_hitPoints += amount;
	}
	else if (this->_hitPoints <= 0)
		std::cout << BOLDRED << this->_Name << " -> DIED"RESET << std::endl;
	else
		std::cout << BOLDGREEN << this->_Name << RESET" can't recover" << std::endl;
}

std::string	ClapTrap::getName(void){
	return (_Name);
}

unsigned int	ClapTrap::getHitpoints(void){
	return (_hitPoints);
}

unsigned int	ClapTrap::getEnergypoints(void){
	return (_energyPoints);
}

unsigned int	ClapTrap::getAttackdamage(void){
	return (_attackDamage);
}

ClapTrap::~ClapTrap(){
	std::cout << RED<< "<" << this->_Name << "> Destructor Called"RESET << std::endl;
}
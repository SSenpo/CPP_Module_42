/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 06:35:59 by mmago             #+#    #+#             */
/*   Updated: 2022/10/04 15:42:15 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	_Name = "Default_CLAP";
	std::cout << "Default constructor called <" CYAN << _Name << RESET ">" << std::endl;
}

ClapTrap::ClapTrap(std::string clap_name){
	_Name = clap_name;
	std::cout << "Named constructor called <" CYAN << clap_name << RESET ">" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
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
	_hitPoints = equals._hitPoints;
	_energyPoints = equals._energyPoints;
	_attackDamage = equals._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (_hitPoints > 0 && _energyPoints > _attackDamage)
	{
		std::cout << BOLDGREEN << _Name << RESET << " attack " << BOLDGREEN << target << RESET
				<< ", causing " << RED << _attackDamage << RESET << " points of damage!" << std::endl;
		_energyPoints -= _attackDamage;
	}
	else if (_hitPoints <= 0)
		std::cout << BOLDRED << _Name << " -> DIED"RESET << std::endl;
	else
		std::cout << BOLDGREEN << _Name << RESET" can't attack target"
				<< BOLDYELLOW" [NO ENERGY]"RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << BOLDGREEN << _Name << RESET" received " << RED << amount
			<< RESET" points of damage" << std::endl;
	if (amount >= _hitPoints)
	{
		std::cout << BOLDGREEN << _Name << RED" -> die."RESET << std::endl;
		_hitPoints = 0;
	}
	else
		_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints > 0 && _energyPoints >= amount)
	{
		std::cout << BOLDGREEN << _Name << RESET << " recovers " << CYAN << amount
				<< RESET" HP " << std::endl;
		_energyPoints -= amount;
		_hitPoints += amount;
	}
	else if (_hitPoints <= 0)
		std::cout << BOLDRED << _Name << " -> DIED"RESET << std::endl;
	else
		std::cout << BOLDGREEN << _Name << RESET" can't recover" << std::endl;
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
	std::cout << RED<< "<" << _Name << "> Destructor Called"RESET << std::endl;
}
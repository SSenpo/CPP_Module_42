/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 06:35:54 by mmago             #+#    #+#             */
/*   Updated: 2022/10/04 17:52:52 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	ScavTrap elf("Elf"), orc("Orc");
	
	elf.attack(orc.getName());
	orc.takeDamage(elf.getAttackdamage());
	orc.attack(elf.getName());
	elf.takeDamage(orc.getAttackdamage());
	elf.beRepaired(1);
	orc.beRepaired(1);

	elf = orc;
	elf.guardGate();
	return (0);
}
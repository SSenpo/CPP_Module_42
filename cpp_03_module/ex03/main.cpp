/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:00:22 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 17:19:33 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap elf("elf");
    DiamondTrap orc("orc");

	elf.whoAmI();
	elf.attack("orc");
	orc.whoAmI();
	
	return (0);
}
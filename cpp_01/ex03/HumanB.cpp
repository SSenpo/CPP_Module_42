/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:32 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:34:18 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string h_Name) : _name(h_Name)
{}

void	HumanB::setWeapon(Weapon &weap)
{
	_weapon = &weap;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their "
		<< _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{}
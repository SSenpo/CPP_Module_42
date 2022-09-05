/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:28 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:18:31 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string h_Name, Weapon& h_Weapon) : _name(h_Name),
	_weapon(h_Weapon)
{}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their "
		<< _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{}
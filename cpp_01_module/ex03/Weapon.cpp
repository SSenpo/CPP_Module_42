/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:41 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:48:47 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)
{}

Weapon::~Weapon()
{}

void		Weapon::setType(std::string new_type)
{
	_type = new_type;
}

const std::string	Weapon::getType()
{
	return (_type);
}
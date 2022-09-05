/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:10 by mmago             #+#    #+#             */
/*   Updated: 2022/09/02 19:39:11 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::announce(void)
{
		std::cout << zombie_name << ": BraiiiiiiiiinnnnzzzZ...\n";
}

void	Zombie::_setNameZM(std::string name)
{
	zombie_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << zombie_name << "\" - destroyed!\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:38:51 by mmago             #+#    #+#             */
/*   Updated: 2022/09/02 19:38:52 by mmago            ###   ########.fr       */
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
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Zombie \"" << zombie_name << "\" - destroyed!\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomChamp.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:07 by mmago             #+#    #+#             */
/*   Updated: 2022/09/02 19:39:08 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChamp(std::string name)
{
	Zombie	All;

	All._setNameZM(name);
	All.announce();

	return ;
}
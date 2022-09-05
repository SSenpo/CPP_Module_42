/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:38:56 by mmago             #+#    #+#             */
/*   Updated: 2022/09/02 19:38:58 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHord(int N, std::string name)
{
	Zombie* zm;

	zm = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zm[i]._setNameZM(name + "_" + char(i + 48));
	}
	return (zm);
}
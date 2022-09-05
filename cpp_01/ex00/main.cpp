/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:01 by mmago             #+#    #+#             */
/*   Updated: 2022/09/02 19:39:02 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie	Rick;

	Rick._setNameZM("Rick");
	Rick.announce();

	Zombie* Jack = newZombie("JACK");
	Jack->announce();

	randomChamp("ALOHA");
	
	delete Jack;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 06:35:54 by mmago             #+#    #+#             */
/*   Updated: 2022/10/02 11:03:11 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	one("ALIEN");
	ClapTrap	two("PREDATOR");

	std::cout << BOLDYELLOW << one.getName() << " has " << one.getHitpoints() << " HP "<< std::endl;
	std::cout << one.getName() << " has " << one.getEnergypoints() << " EP "<< std::endl;
	std::cout << one.getName() << " has " << one.getAttackdamage() << " Attack Damage "<< std::endl;
	std::cout << "\n";
	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << two.getName() << " has " << two.getAttackdamage() << " Attack Damage "<< std::endl;
	std::cout << "\n"RESET;

	one.attack(two.getName());
	std::cout << one.getName() << " has " << one.getHitpoints() << " HP "<< std::endl;
	std::cout << one.getName() << " has " << one.getEnergypoints() << " EP "<< std::endl;
	std::cout << one.getName() << " has " << one.getAttackdamage() << " Attack Damage "<< std::endl;
	std::cout << "\n";

	two.takeDamage(one.getAttackdamage());
	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	one.attack(two.getName());
	std::cout << one.getName() << " has " << one.getHitpoints() << " HP "<< std::endl;
	std::cout << one.getName() << " has " << one.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	two.takeDamage(one.getAttackdamage());
	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	two.beRepaired(3);
	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";
	
	two.attack(one.getName());
	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	one.takeDamage(two.getAttackdamage());
	std::cout << one.getName() << " has " << one.getHitpoints() << " HP "<< std::endl;
	std::cout << one.getName() << " has " << one.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	
	one.attack(two.getName());
	std::cout << one.getName() << " has " << one.getHitpoints() << " HP "<< std::endl;
	std::cout << one.getName() << " has " << one.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";
	
	two.attack(one.getName());
	std::cout << two.getName() << " has " << two.getHitpoints() << " HP "<< std::endl;
	std::cout << two.getName() << " has " << two.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";

	one.takeDamage(6);
	std::cout << one.getName() << " has " << one.getHitpoints() << " HP "<< std::endl;
	std::cout << one.getName() << " has " << one.getEnergypoints() << " EP "<< std::endl;
	std::cout << "\n";
	one.attack(two.getName());
	one.beRepaired(1);

	return (0);
}
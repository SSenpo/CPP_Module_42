/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:35 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:34:09 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
	HumanB();
public:
	~HumanB();
	HumanB(std::string h_Name);
	void	attack();
	void	setWeapon(Weapon &weap);

};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:30 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:18:24 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;
	HumanA();
public:
	~HumanA();
	HumanA(std::string h_Name, Weapon& h_Weapon);
	void	attack();

};


#endif
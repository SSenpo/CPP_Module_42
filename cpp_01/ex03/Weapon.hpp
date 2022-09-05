/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:43 by mmago             #+#    #+#             */
/*   Updated: 2022/09/04 00:24:32 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Weapon
{
	private:
		std::string	_type;
		Weapon();
	public:
		~Weapon();
		Weapon(std::string str);
		void				setType(std::string new_type);
		const std::string	getType();
};

#endif
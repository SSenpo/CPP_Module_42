/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:50:00 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 15:56:45 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
		protected:
			std::string _Name;
			unsigned int _Hitpoints;
			unsigned int _EnergyPoints;
			unsigned int _AttakDamage;
			FragTrap();
		public:
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			~FragTrap();

			FragTrap& operator=(const FragTrap &equals);
			void	highFiveGuys(void);
};

# endif
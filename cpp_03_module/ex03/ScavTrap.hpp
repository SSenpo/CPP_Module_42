/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:26:53 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 16:18:25 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
		protected:
			std::string _Name;
			unsigned int _Hitpoints;
			unsigned int _EnergyPoints;
			unsigned int _AttakDamage;
			ScavTrap();
		public:
			ScavTrap(std::string name);
			ScavTrap(std::string name, int energy);
			ScavTrap(const ScavTrap &copy);
			~ScavTrap();

			ScavTrap& operator=(const ScavTrap &equals);
			virtual void attack(std::string const & target);
			void	guardGate();
};

# endif
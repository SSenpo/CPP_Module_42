/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:36:01 by mmago             #+#    #+#             */
/*   Updated: 2022/10/07 16:12:36 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
		private:
			std::string	_name;
		protected:
			unsigned int	_Hitpoints;
			unsigned int	_EnergyPoints;
			unsigned int	_AttakDamage;
			DiamondTrap();
		public:
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap &copy);
			~DiamondTrap();

			DiamondTrap& operator=(const DiamondTrap &equals);
			void	whoAmI();
			void	attack(std::string const &target);
};

# endif
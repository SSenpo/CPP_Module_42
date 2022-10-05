/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:26:53 by mmago             #+#    #+#             */
/*   Updated: 2022/10/04 17:52:03 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
		private:
			ScavTrap();
		public:
			ScavTrap(std::string clap_name);
			ScavTrap(const ClapTrap &copy);
			~ScavTrap();

			ScavTrap& operator=(const ScavTrap &equals);
			void	guardGate();
};

# endif
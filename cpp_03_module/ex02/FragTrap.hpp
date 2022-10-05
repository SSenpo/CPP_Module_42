/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:50:00 by mmago             #+#    #+#             */
/*   Updated: 2022/10/04 18:13:45 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
		private:
			FragTrap();
		public:
			FragTrap(std::string clap_name);
			FragTrap(const FragTrap &copy);
			~FragTrap();

			FragTrap& operator=(const FragTrap &equals);
			void	highFiveGuys(void);
};

# endif
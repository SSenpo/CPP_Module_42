/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:41 by mmago             #+#    #+#             */
/*   Updated: 2022/09/05 16:36:08 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	initIndex();
	methods[0] = &Harl::debug;
	methods[1] = &Harl::info;
	methods[2] = &Harl::warning;
	methods[3] = &Harl::error;
	std::cout << CYAN"Harl where.\n"RESET;
}

Harl::~Harl()
{
	std::cout << CYAN"Harl dead.\n"RESET;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! If you did, I wouldn't "
		<< "be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I've been coming for years whereas you started working here "
		<< "since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager "
		<< "now." << std::endl;
}

void	Harl::initIndex()
{
	_index[0] = "DEBUG";
	_index[1] = "INFO";
	_index[2] = "WARNING";
	_index[3] = "ERROR";
}

void	Harl::complain(std::string level)
{
	int	i = -1;
	
	while (i < 5 && level != _index[++i]) ;
	switch (i)
	{
	case 4:
		std::cout << "This is not Harl level.\n";
		break;
	
	default:
		std::cout << RED << _index[i] << ": "RESET;
		(this->*this->methods[i])();
		break;
	}
}
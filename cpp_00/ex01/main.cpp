/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:30:10 by mmago             #+#    #+#             */
/*   Updated: 2022/08/31 01:27:25 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	str;
	Phonebook	book;
	int			index = 0;
	int			num_cont = 0;

	while (1)
	{
		std::cout << "COMMAND: ";
		std::getline(std::cin, str);
		if (str == "EXIT")
			exit(0);
		if (str == "ADD")
		{
			book._setCont("Enter Name :", 0, index);
			book._setCont("Enter Last name :", 1, index);
			book._setCont("Enter Nick :", 2, index);
			book._setCont("Enter Phone number :", 3, index);
			book._setCont("Enter DARKNESS SECRET :", 4, index);
			if (book._checkContact(index) == 0)
			{
				index++;
				if (index == 8) index = 0;
				if (num_cont < 8) num_cont++;
			}
		}
		if (str == "SEARCH")
			book._printHash(num_cont);
	}
	return (0);
}
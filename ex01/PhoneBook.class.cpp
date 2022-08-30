/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:30:08 by mmago             #+#    #+#             */
/*   Updated: 2022/08/31 01:27:10 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Phonebook::_setCont(std::string op, int i, int index) {
	std::string	strit;

	std::cout << op + " ";
	std::getline(std::cin, strit);
	data[index]._setContactInfo(strit, i, index);
}

void	Phonebook::_printHash(int index) {
	std::string	str;
	
	if (index >= 0 && data[0]._checkEmptyInfo() == 0)
	{
		std::cout 
			<< "--------------------------------------------\n";
		std::cout << std::setw(10) << "ID" << "|";
		std::cout << std::setw(10) << "NAME" << "|";
		std::cout << std::setw(10) << "LAST_NAME" << "|";
		std::cout << std::setw(10) << "NICK" << "|" << std::endl;
		_getContactData(index);
		std::cout << "Select an ID for more INFO: ";
		std::getline(std::cin, str);
		_getFllInfo(str);
	}
	else
		std::cout << "There are no contacts.\n";
}

void	Phonebook::_getContactData(int index) {
	std::string	output;
	int			count;
	int			ind_next;

	ind_next = -1;
	while (++ind_next < index)
	{
		std::cout << std::setw(10) << ind_next << "|";
		count = -1;
		while (++count < 3)
		{
			output = data[ind_next]._getContactInfo(count);
			if (output.size() > 10)
				output = output.substr(0, 9) + ".";
			std::cout << std::setw(10) << output << "|";
		}
		std::cout << "\n";
	}
}

void	Phonebook::_getFllInfo(std::string str) {
	int			get_index;
	int			count;
	std::string	output;
	
	count = -1;
	get_index = 0;
	try {
		get_index = std::stoi(str);
	}
	catch(std::invalid_argument e) {
		std::cout << "Caught Invalid Argument Exception\n";
		return ;
	}
	while (++count < 8 && get_index < 9 && get_index >= 0)
	{
		if (data[count]._getIndex(get_index) == 0)
		{
			count = -1;
			std::cout << "ID [" << get_index << "] INFO:\n";
			while (++count < 5)
			{
				output = data[get_index]._getContactInfo(count);
				std::cout << output << "\n";
			}
			return ;
		} 
	}
	std::cout << "WRONGER\n";
}

int		Phonebook::_checkContact(int index) {
	if (data[index]._checkEmptyInfo() > 0)
	{
		data[index]._ftNull();
		return (1);
	}
	else
		return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:30:05 by mmago             #+#    #+#             */
/*   Updated: 2022/08/31 01:22:17 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
	contact_index = 0;
}

Contact::~Contact() {

}

void	Contact::_setContactInfo(std::string str, int count, int index)	{
	if (count == 0) _firstName = str;
	if (count == 1) _lastName = str;
	if (count == 2) _nickname = str;
	if (count == 3) _phoneNumber = str;
	if (count == 4) {
		_darkestSecret = str;
		contact_index = index;
	}
}

std::string	Contact::_getContactInfo(int count)	{
	if (count == 0) return (_firstName);
	if (count == 1) return (_lastName);
	if (count == 2) return (_nickname);
	if (count == 3) return (_phoneNumber);
	if (count == 4) return (_darkestSecret);
	else
		return ("");
}

int		Contact::_checkEmptyInfo() {
	if (_firstName == "" || _lastName == ""
		|| _nickname == "" || _phoneNumber == ""
		|| _darkestSecret == "")
		return (1);
	else
		return (0);
}

int		Contact::_getIndex(int get_index) {
	if (contact_index == get_index)
		return (0);
	else
		return (1);
}

void	Contact::_ftNull() {
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_phoneNumber = "";
	_darkestSecret = "";
	contact_index = 0;
}

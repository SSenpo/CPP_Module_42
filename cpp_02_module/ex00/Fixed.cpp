/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:35:09 by mmago             #+#    #+#             */
/*   Updated: 2022/09/10 17:10:03 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed () : _fixed(0)
{
	std::cout << CYAN "Default constructor called" RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << MAGENTA "Copy constructor called" RESET << std::endl;
	*this = copy;
}

Fixed& Fixed::operator= (const Fixed &equals)
{
	std::cout << YELLOW "Copy assignment operator called" RESET << std::endl;
	this->setRawBits(equals.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED "Destructor called" RESET << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << RED "getRawBits member function called" RESET << std::endl;
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}
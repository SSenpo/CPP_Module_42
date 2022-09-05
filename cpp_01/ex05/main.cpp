/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:37 by mmago             #+#    #+#             */
/*   Updated: 2022/09/05 16:20:33 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	Cat;
	Cat.complain("DEBUG");
	Cat.complain("INFO");
	Cat.complain("WARNING");
	Cat.complain("ERROR");
	return 0; 
}
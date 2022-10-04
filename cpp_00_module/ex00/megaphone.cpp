/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:48:14 by mmago             #+#    #+#             */
/*   Updated: 2022/08/30 14:48:27 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 1)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	else if (ac > 1)
	{
		while (++i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				std::cout << (char)(std::toupper(av[i][j]));
				j++;
			}
			if (i != ac - 1)
				std::cout << " ";
			else if (i == ac - 1)
				std::cout << "\n";
		}
	}
	return (0);
}
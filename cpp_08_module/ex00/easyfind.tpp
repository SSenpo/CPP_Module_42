/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:03:22 by senpo             #+#    #+#             */
/*   Updated: 2022/11/15 17:58:32 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "easyfind.hpp"

template <class Container>
typename Container::iterator	easyfind(Container& Vec, int value) {
	typename Container::iterator	it;

	it = std::find(Vec.begin(), Vec.end(), value);
	if (it != Vec.end())
		return it;
	else
		throw std::runtime_error(BOLDRED "Value not found" RESET);
	
};
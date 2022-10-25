/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:57:21 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 19:34:41 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain{
	protected:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();

		Brain& operator=(const Brain &equals);
		std::string getIdeas(int numIdeas) const;
};

#endif
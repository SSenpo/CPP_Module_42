/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:59 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 16:02:40 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongDog_HPP
# define WrongDog_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
	private:
		std::string		type;
	
	public:
		WrongDog();
		WrongDog(const WrongDog &copy);
		~WrongDog();

		WrongDog& operator=(const WrongDog &equals);

		void			setType(const std::string &Type);
		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:59 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 19:49:25 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	private:
		std::string		type;
		Brain			*idea;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();

		Dog& operator=(const Dog &equals);

		void			setType(const std::string &Type);
		std::string		getType(void) const;
		void			makeSound(void) const;

		std::string		get_Dog(int num_Dog_Idea);
};

#endif
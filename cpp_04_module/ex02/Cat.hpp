/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:53:55 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 19:23:13 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private:
		std::string		type;
		Brain			*idea;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();

		Cat& operator=(const Cat &equals);

		void			setType(const std::string &Type);
		std::string		getType(void) const;
		virtual	void	makeSound(void) const;

		std::string		get_Cat(int	num_Cat_Idea);
};

#endif
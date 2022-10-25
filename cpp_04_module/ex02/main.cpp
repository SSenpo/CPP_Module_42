/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:41:42 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 20:11:28 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){
	Animal*	jivotnoe[100];

	for (int i = 0; i < 100; i++){
		if (i < 50){
			jivotnoe[i] = new Cat();
			continue;
		}
		jivotnoe[i] = new Dog();
	}
	for (int i = 0; i < 100; i++){
		jivotnoe[i]->makeSound();
		delete jivotnoe[i];
	}

	// std::system("leaks Animal");

	return (0);
}
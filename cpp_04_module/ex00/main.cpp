/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:42:15 by mmago             #+#    #+#             */
/*   Updated: 2022/10/25 18:04:28 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	std::cout << "----------------TEST-----------------" << std::endl;
	const WrongAnimal *a = new WrongAnimal();
	const WrongAnimal *l = new WrongDog();
	const WrongAnimal *k = new WrongCat();
	std::cout << l->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	l->makeSound();
	k->makeSound();
	a->makeSound();

	return (0);
}
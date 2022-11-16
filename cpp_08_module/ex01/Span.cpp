/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:33:22 by senpo             #+#    #+#             */
/*   Updated: 2022/11/16 19:45:39 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){

};

Span::Span(unsigned int num) : size(num) {
	std::cout << BOLDGREEN "Span named constructor called" RESET << std::endl;
};

Span& Span::operator=(const Span &equals){
	std::cout << BOLDGREEN "Span Assignation operator called" RESET << std::endl;
	if (this == &equals)
		return (*this);
	this->size = equals.size;
	this->collection = equals.collection;
	return (*this);
};

Span::Span(const Span& copy){
	std::cout << BOLDGREEN "Span Copy constructor called" RESET << std::endl;
	*this = copy;
};

void Span::addNumber(int n) {
	if (this->collection.size() < this->size) {
		collection.push_back(n);
	}
	else
		throw std::runtime_error("Collection is full");
};

void Span::addSequence(std::vector<int>::iterator start, std::vector<int>::iterator end) {
		unsigned long dist = std::distance(start, end);
		if ((this->size - this->collection.size()) < dist) {
			throw std::out_of_range("Not enought space to insert sequence");
		} else {
			this->collection.insert(this->collection.end(), start, end);
		}
};

unsigned int	Span::longestSpan() {
	if (this->collection.size() < 2)
		throw std::runtime_error
			("Not enough elements in the collection to calculate span");

	std::vector<int> vec = this->collection;
	std::sort(vec.begin(), vec.end());
	unsigned int shortest = abs(vec[1] - vec[0]);
	for (int i = 1; i < (int)vec.size() - 1; ++i) {
		unsigned int dif = abs(vec[i + 1] - vec[i]);
		if (dif < shortest)
			shortest = dif;
	}
	return shortest;
};
unsigned int	Span::shortestSpan() {
	if (this->collection.size() < 2)
		throw std::runtime_error("Not enough elements in the collection");

	return *std::max_element(this->collection.begin(), this->collection.end())
		- *std::min_element(this->collection.begin(), this->collection.end());
};

Span::~Span(){
	std::cout << BOLDRED "Span destructor called" RESET << std::endl;
};
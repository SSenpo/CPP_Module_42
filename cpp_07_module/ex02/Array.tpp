/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: senpo <senpo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 07:10:39 by senpo             #+#    #+#             */
/*   Updated: 2022/11/14 08:36:23 by senpo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <class T>
Array<T>::Array() : ptr(new T()), lenght(0) {
	std::cout << BOLDGREEN "Array class constructor called" RESET << std::endl;
};

template <class T>
Array<T>::Array(unsigned int n) {
	std::cout << BOLDGREEN "Array class named constructor called" RESET << std::endl;
	this->ptr = new T[n];
	this->lenght = n;
};

template <class T>
Array<T>::Array(const Array<T>& copy) {
	std::cout << BOLDYELLOW "Array class copy constructor called" RESET << std::endl;
	this->ptr = new T[copy.lenght];
	this->lenght = copy.lenght;
	std::memcpy(this->ptr, copy.ptr, sizeof(T) * this->lenght);
};

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& arr) {
	std::cout << BOLDGREEN "Array class equals operator called" RESET << std::endl;

	if (this == &arr)
		return *this;

	delete[] this->ptr;
	this->lenght = arr.lenght;
	this->ptr = new T[arr.lenght];
	std::memcpy(this->ptr, arr.ptr, sizeof(T) * this->lenght);
	return *this;
};

template <class T>
T& Array<T>::operator[](unsigned int index) {
	if (this->lenght <= index)
		throw std::out_of_range("Index out of range EXCEPTION");
	return this->ptr[index];
};

template <class T>
unsigned int	Array<T>::size() const {
	return this->lenght;
};

template <class T>
Array<T>::~Array() {
	delete[] this->ptr;
	std::cout << BOLDRED "Array class destructor called" RESET << std::endl;
};
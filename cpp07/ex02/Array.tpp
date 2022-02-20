/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:02:34 by cowen             #+#    #+#             */
/*   Updated: 2022/02/19 21:38:55 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _amount(0){
	
}

template <typename T>
Array<T>::~Array(void){
	clearElements();
}

template <typename T>
const char * Array<T>::OutOfRange::what() const throw(){
	return ("Value is out of range from array");
}

template <typename T>
Array<T>::Array(unsigned int amount){
	_amount = amount;
	if (amount != 0){
		_elements = new T[amount];
		for (unsigned int i = 0; i < amount; i++){
			_elements[i] = 0;
		}
	}
}

template <typename T>
Array<T>::Array(const Array<T>& rhs){
	_amount = rhs._amount;
	if (_amount != 0){
		_elements = new T[_amount];
		for (unsigned int i = 0; i < _amount; i++){
			_elements[i] = rhs._elements[i];
		}
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs){
	
	if (this != &rhs){
		clearElements();
		_amount = rhs._amount;
		if (_amount != 0){
			_elements = new T[_amount];
			for (unsigned int i = 0; i < _amount; i++){
				_elements[i] = rhs._elements[i];
			}
		}
	}
}

template <typename T> 
T& Array<T>::operator[](unsigned int value){
	if (value < _amount){
		return (_elements[value]);
	}
	else if (_amount == 0 && value == 0){
		return (_elements[0]);
	}
	else
		throw OutOfRange();
}

template <typename T>
void Array<T>::clearElements(void){
	if (_amount != 0)
		delete[] _elements;
}

template <typename T>
unsigned int	Array<T>::size(void) const{
	return _amount;
}

#endif
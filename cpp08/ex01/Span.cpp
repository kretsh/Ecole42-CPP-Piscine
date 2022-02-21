/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:43:11 by cowen             #+#    #+#             */
/*   Updated: 2022/02/21 14:28:45 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned value) : _amount(value){
	
}

Span::~Span(void){
	
}

const char * Span::OverloadedValues::what() const throw(){
	return ("Too much values in array");
}

const char * Span::NotAllowed::what() const throw(){
	return ("To low values in Span to use this function");
}

Span::Span(const Span& rhs){
	_array = rhs._array;
	_amount = rhs._amount;
}

Span& Span::operator=(const Span& rhs){
	_array = rhs._array;
	_amount = rhs._amount;
	return *this;
}

void Span::addNumber(int value){
	if (_array.size() == _amount)
		throw OverloadedValues();
	_array.push_back(value);
}

int Span::longestSpan(void){
	if (_array.size() < 2)
		throw NotAllowed();
	std::vector<int>::iterator it = std::max_element(_array.begin(), _array.end());
	std::vector<int>::iterator it_2 = std::min_element(_array.begin(), _array.end());
	
	return (*it - *it_2);
}

int Span::shortestSpan(void){
	if (_array.size() < 2)
		throw NotAllowed();
	std::sort(_array.begin(), _array.end());
	std::vector<int> output(_array.size());
	std::adjacent_difference(_array.begin(), _array.end(), output.begin());
	return *(std::min_element(output.begin() + 1, output.end()));
}



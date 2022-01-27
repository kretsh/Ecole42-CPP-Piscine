/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:21:04 by cowen             #+#    #+#             */
/*   Updated: 2022/01/27 20:22:11 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed & other){
	std::cout << "Copy constructor called" << std::endl;
	this->_raw_bits = other.getRawBits();
}

Fixed::~Fixed(void){
	std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed & rhs){
	if (this != &rhs){
		std::cout << "Copy assigment constructor called" << std::endl;
		this->_raw_bits = rhs.getRawBits();
	}
	return *this;
}

void Fixed::setRawBits(const int raw_bits){
	this->_raw_bits = raw_bits;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawsBits member function called" << std::endl;
	return this->_raw_bits;
}


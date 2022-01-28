/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:21:04 by cowen             #+#    #+#             */
/*   Updated: 2022/01/28 21:14:12 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	setRawBits(value * (1 << _const_value));
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	
	setRawBits(roundf(value * (1 << _const_value)));
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
		std::cout << "Assignation operator called" << std::endl;
		this->_raw_bits = rhs.getRawBits();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &rhs)
{
	stream << rhs.toFloat();
	return (stream);
}

int Fixed::toInt(void) const{
	return (this->_raw_bits >> _const_value);
}

float Fixed::toFloat(void) const{
	float temp;

	temp = 1 << _const_value;
	return (((float)(this->_raw_bits)) / temp);
}

void Fixed::setRawBits(const int raw_bits){
	this->_raw_bits = raw_bits;
}

int	Fixed::getRawBits(void) const{
	return this->_raw_bits;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:21:04 by cowen             #+#    #+#             */
/*   Updated: 2022/02/02 19:10:20 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor */ 
Fixed::Fixed(void){
	setRawBits(0);
}

Fixed::Fixed(const int value){
	setRawBits(value * (1 << _const_value));
}

Fixed::Fixed(const float value){	
	setRawBits(roundf(value * (1 << _const_value)));
}

Fixed::Fixed(const Fixed & other){
	this->_raw_bits = other.getRawBits();
}

/* Destructor */ 

Fixed::~Fixed(void){
}

/* Operator */ 

Fixed& Fixed::operator=(const Fixed & rhs){
	if (this != &rhs){
		this->_raw_bits = rhs.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed & rhs){
	Fixed temp;
	
	temp._raw_bits = this->_raw_bits + rhs._raw_bits;
	return temp;
}

Fixed Fixed::operator-(const Fixed & rhs){
	Fixed temp;
	
	temp._raw_bits = this->_raw_bits - rhs._raw_bits;
	return temp;
}

Fixed Fixed::operator*(const Fixed & rhs){
	Fixed temp(this->toFloat() * rhs.toFloat());
	return temp;
}
Fixed Fixed::operator/(const Fixed & rhs){
	Fixed temp(this->toFloat() / rhs.toFloat());
	return temp;
}

Fixed& Fixed::operator++(void){
	this->_raw_bits++;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp(*this);
	this->_raw_bits++;
	return (temp);
}

Fixed& Fixed::operator--(void){
	this->_raw_bits--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed temp(*this);
	this->_raw_bits--;
	return (temp);
}

const Fixed& Fixed::max(const Fixed & lhs, const Fixed & rhs){
	if (lhs._raw_bits > rhs._raw_bits)
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::min(const Fixed & lhs, const Fixed & rhs){
	if (lhs._raw_bits < rhs._raw_bits)
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::max(Fixed & lhs, Fixed & rhs){
	if (lhs._raw_bits > rhs._raw_bits)
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::min(Fixed & lhs, Fixed & rhs){
	if (lhs._raw_bits < rhs._raw_bits)
		return (lhs);
	else
		return (rhs);
}

bool Fixed::operator>(const Fixed & rhs){
	if (this != &rhs){
		return (this->_raw_bits > rhs._raw_bits) ? true : false;
	}
	return false;
}

bool Fixed::operator>=(const Fixed & rhs){
	if (this != &rhs){
		return (this->_raw_bits >= rhs._raw_bits) ? true : false;
	}
	return true;
}

bool Fixed::operator<(const Fixed & rhs){
	if (this != &rhs){
		return (this->_raw_bits < rhs._raw_bits) ? true : false;
	}
	return false;
}

bool Fixed::operator<=(const Fixed & rhs){
	if (this != &rhs){
		return (this->_raw_bits <= rhs._raw_bits) ? true : false;
	}
	return true;
}

bool Fixed::operator==(const Fixed & rhs){
	return (this->_raw_bits == rhs._raw_bits) ? true : false;
}

bool Fixed::operator!=(const Fixed & rhs){
	return (this->_raw_bits != rhs._raw_bits) ? true : false;
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


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:22:20 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 14:57:51 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){
	
}

Point::~Point(void){
	
}

Point::Point(const float x, const float y) : _x(x), _y(y){
	
}

Point::Point(const Point & other) : _x(other._x), _y(other._y){
	
}

Point	Point::operator=(const Point & rhs){
	if (this != &rhs){
		Point temp(rhs._x.getRawBits(), rhs._y.getRawBits());
		this->~Point();
		return temp;
	}
	return *this;
}

Fixed Point::getX(void) const {
	return this->_x;
}


Fixed Point::getY(void) const{
	return this->_y;
}
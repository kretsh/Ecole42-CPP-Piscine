/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:22:17 by cowen             #+#    #+#             */
/*   Updated: 2022/02/02 21:39:23 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign(Point const first, Point const second, Point const third){

	return (first.getX() - third.getX() * (second.getY() - third.getY()) - (second.getX() 
	- third.getX()) * (first.getY() - third.getY())).toFloat();
}

bool	bsp( Point const a, Point const b, Point const c, Point const point){
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(point, a, b);	
	d2 = sign(point, b, c);	
	d3 = sign(point, c, a);	
	
	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}


int main(void){
	Point a(1, 5);
	Point b(3, 2);
	Point c(7, 8);
	Point to_find(6, 5);
	
	bool hello = bsp(a, b, c, to_find);
	
	if (hello){
		std::cout << "OMG, I'M IN TRIANGLE" << std::endl;
	}
	else{
		std::cout << "SO SAD, I'M NOT IN TRIANGLE" << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:22:22 by cowen             #+#    #+#             */
/*   Updated: 2022/02/02 21:03:44 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point(void);
		Point(const float, const float);
		Point(const Point & other);
		~Point(void);
		Point	operator=(const Point & other);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};
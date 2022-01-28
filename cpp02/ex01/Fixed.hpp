/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:22:37 by cowen             #+#    #+#             */
/*   Updated: 2022/01/28 21:14:36 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cmath>
#include <math.h>
#include <sstream>

class Fixed{
	private:
		int	_raw_bits;
		static const int _const_value = 8;
	public:
		Fixed();
		Fixed(const Fixed & other);
		Fixed(const int);
		Fixed(const float);
		~Fixed();
		Fixed&	operator=(const Fixed & rhs);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(const int raw_bits);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &data);
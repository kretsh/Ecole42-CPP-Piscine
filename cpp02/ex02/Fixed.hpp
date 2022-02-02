/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:22:37 by cowen             #+#    #+#             */
/*   Updated: 2022/02/02 19:09:34 by cowen            ###   ########.fr       */
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
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator+(const Fixed & rhs);
		Fixed	operator-(const Fixed & rhs);
		Fixed	operator*(const Fixed & rhs);
		Fixed	operator/(const Fixed & rhs);
		bool	operator>(const Fixed & rhs);
		bool	operator>=(const Fixed & rhs);
		bool	operator<(const Fixed & rhs);
		bool	operator<=(const Fixed & rhs);
		bool	operator==(const Fixed & rhs);
		bool	operator!=(const Fixed & rhs);
		static const Fixed&	max(Fixed &lhs, Fixed &rhs);
		static const Fixed&	min(Fixed &lhs, Fixed &rhs);
		static const Fixed&	max(const Fixed &lhs, const Fixed &rhs);
		static const Fixed&	min(const Fixed &lhs, const Fixed &rhs);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(const int raw_bits);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &data);
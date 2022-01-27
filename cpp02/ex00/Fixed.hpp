/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:22:37 by cowen             #+#    #+#             */
/*   Updated: 2022/01/27 20:12:09 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Fixed{
	private:
		int	_raw_bits;
		static const int _const_value = 8;
	public:
		Fixed();
		Fixed(const Fixed & other);
		~Fixed();
		Fixed&	operator=(const Fixed & rhs);
		int		getRawBits(void) const;
		void	setRawBits(const int raw_bits);
};
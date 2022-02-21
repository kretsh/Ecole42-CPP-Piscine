/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:42:31 by cowen             #+#    #+#             */
/*   Updated: 2022/02/21 14:14:07 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <exception>
#include <numeric>

class Span{
	private:
		unsigned int		_amount;
		std::vector<int>	_array;
		class OverloadedValues : public std::exception{
			const char * what() const throw ();
		};
		class NotAllowed : public std::exception{
			const char * what() const throw ();
		};
		Span();
	public:
		Span(unsigned int);
		Span(const Span&);
		Span& operator=(const Span&);
		void addNumber(int);
		int shortestSpan();
		int longestSpan();
		~Span();
};
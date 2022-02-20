/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:40:08 by cowen             #+#    #+#             */
/*   Updated: 2022/02/20 12:51:05 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define MAX_VAL 750

#include <exception>
#include <iostream>

template<class T>
class Array{
	private:
		T*				_elements;
		unsigned int	_amount;
		void	clearElements();
		class OutOfRange : public std::exception{
			const char * what () const throw ();
		};
	public:
		Array();
		~Array();
		Array(const unsigned int);
		Array(const Array&);
		Array& operator=(const Array&);
		T& operator[](unsigned int);
		unsigned int	size() const;
};

#include "Array.tpp"

#endif
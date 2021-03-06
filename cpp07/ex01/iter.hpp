/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:33:29 by cowen             #+#    #+#             */
/*   Updated: 2022/02/20 15:45:18 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T const * adressArray, unsigned int range, void (function)(T const &))
{
	for (unsigned int i = 0; i < range; i++){
		function(adressArray[i]);
	}
}

template<typename T>
void iter(T* adressArray, unsigned int range, void (function)(T&))
{
	for (unsigned int i = 0; i < range; i++){
		function(adressArray[i]);
	}
}

#endif
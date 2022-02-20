/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:08:42 by cowen             #+#    #+#             */
/*   Updated: 2022/02/19 14:09:04 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template<typename T>
void swap(T& value, T& value2){
	T temp = value;

	value = value2;
	value2 = temp;
}

template<typename T>
T min(T value, T value2){
	return (value < value2 ? value : value2);
}

template<typename T>
T max(T value, T value2){
	return (value > value2 ? value : value2);
}

#endif
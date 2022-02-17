/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:17:52 by cowen             #+#    #+#             */
/*   Updated: 2022/02/17 16:48:38 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


int	main(void){
	Data a1;
	Data *a = &a1;
	uintptr_t	test = 0;
	
	a->digit = 5;
	a->symbol = 'c';
	std::cout << "Address of Data before serialize: " << a << std::endl;
	test = serialize(a);
	a = deserialize(test);
	std::cout << "Address of Data after deserialize: " << a << std::endl;
	std::cout << "Int value of Data Struct: " << a->digit << std::endl;
}


uintptr_t serialize(Data* ptr){
	uintptr_t	temp;

	temp = reinterpret_cast<uintptr_t>(ptr);
	return temp;
}

Data* deserialize(uintptr_t raw){
	Data*	temp;

	temp = reinterpret_cast<Data*>(raw);
	return temp;
}
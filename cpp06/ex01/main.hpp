/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:26:40 by cowen             #+#    #+#             */
/*   Updated: 2022/02/17 17:03:13 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

struct Data
{
	int digit;
	char symbol;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif

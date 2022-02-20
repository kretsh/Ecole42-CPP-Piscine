/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:04:49 by cowen             #+#    #+#             */
/*   Updated: 2022/02/20 19:26:22 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void)
{
	{
	std::array<int, 6> myArray = {1, 2, 5, 8, 9, 11};	
	try
	{
		std::cout << easyFind(myArray, 10) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}	
	}
	{
	std::vector<int> myArray;
	myArray.push_back(1);
	myArray.push_back(2);
	myArray.push_back(5);
	myArray.push_back(8);
	myArray.push_back(9);
	myArray.push_back(11);
	try
	{
		std::cout << easyFind(myArray, 9) << std::endl;
		std::cout << easyFind(myArray, 11) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	}
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:54:15 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 19:00:06 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){
	std::string str("HI THIS IS BRAIN");
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "This is address of value str: " << &str << std::endl;
	std::cout << "This is address of value stringPTR: " << stringPTR << std::endl;
	std::cout << "This is address of value stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "This is value str: " << str << std::endl;
	std::cout << "This is value stringPTR: " << *stringPTR << std::endl;
	std::cout << "This is value stringREF: " << stringREF << std::endl;
}
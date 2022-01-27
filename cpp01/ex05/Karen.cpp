/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:48:53 by cowen             #+#    #+#             */
/*   Updated: 2022/01/27 14:09:58 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){
	_funcas[0] = &Karen::debug;
	_funcas[1] = &Karen::info;
	_funcas[2] = &Karen::warning;
	_funcas[3] = &Karen::error;
	
	_phrase[0] = "DEBUG";
	_phrase[1] = "INFO";
	_phrase[2] = "WARNING";
	_phrase[3] = "ERROR";
}

Karen::~Karen(){
	
}

void Karen::debug(void){
	
	std::cout << "I love having extra bacon for ";
	std::cout << "my 7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!" << std::endl;
}

void Karen::info(void){
	
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Karen::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string phrase){
	int i = 0;

	while (phrase.compare(_phrase[i]))
		i++;
	(this->*_funcas[i])();
}
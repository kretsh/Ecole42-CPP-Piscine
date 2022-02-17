/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:11:42 by cowen             #+#    #+#             */
/*   Updated: 2022/02/15 15:24:21 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){
	_funcas[0] = &Karen::debug;
	_funcas[1] = &Karen::info;
	_funcas[2] = &Karen::warning;
	_funcas[3] = &Karen::error;
	_funcas[4] = &Karen::incorrect;

}

Karen::~Karen(){
	
}



void Karen::complain(std::string phrase){
	std::string phr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	enum phrases{DEBUG = 0, INFO = 1, WARNING = 2, ERROR = 3};
	int i = 0;
	
	while (i < 4 && phrase.compare(phr[i]))
		i++;
	switch (i){
		case DEBUG:
			(this->*_funcas[0])();
		case INFO:
			(this->*_funcas[1])();
		case WARNING:
			(this->*_funcas[2])();
		case ERROR:
			(this->*_funcas[3])();
			break;
		default:
			(this->*_funcas[4])();
	}
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

void Karen::incorrect(void){
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
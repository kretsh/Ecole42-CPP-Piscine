/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:44:13 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 16:14:39 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(void){
	this->_name = "RandomZombie";

}

Zombie::Zombie(std::string name){
	this->_name = name;
}

Zombie::~Zombie(void){
	std::cout << Zombie::getName() << " has died" << std::endl;
}

void Zombie::announce(void){
	std::cout << Zombie::getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	
}

std::string Zombie::getName(void){
	return this->_name;
}
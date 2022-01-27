/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:00:49 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 21:59:11 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void){
	
}

HumanB::HumanB(std::string name){
	this->_name = name;
}

HumanB::~HumanB(void){
	
}

void HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

void HumanB::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
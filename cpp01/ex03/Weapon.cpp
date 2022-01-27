/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:05:30 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 22:05:02 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
	
}

Weapon::Weapon(std::string weapon){
	this->_weapon = weapon;
}

Weapon::~Weapon(void){
	
}

void Weapon::setType(std::string weapon){
	this->_weapon = weapon;
}

const std::string& Weapon::getType(void){
	return (this->_weapon);
}
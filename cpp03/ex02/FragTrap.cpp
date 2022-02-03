/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:38:38 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 20:25:22 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(void){
	std::cout << "Default constructor(FragTrap)called" << std::endl;
	this->_name = "Default";
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::~FragTrap(void){
	std::cout << "Default destructor(FragTrap) called" << std::endl;
}

FragTrap::FragTrap(std::string name){
	std::cout << "Constructor with name called (FragTrap)" << std::endl;
	this->_name = name;
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
}

FragTrap::FragTrap(const FragTrap & rhs){
	std::cout << "Copy assig. constructor called (FragTrap)" << std::endl;
	this->_name = rhs._name;
	this->_attackDamage = rhs._attackDamage;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
}

FragTrap	FragTrap::operator=(const FragTrap & rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_attackDamage = rhs._attackDamage;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void		FragTrap::highFivesGuys(void){
	std::cout << _name << " GIVES HIGH FIVE TO EVERYONE" << std::endl;
}
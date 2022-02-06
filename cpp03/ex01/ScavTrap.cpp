/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:03:45 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 16:15:09 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void){
	std::cout << "Default constructor(ScavTrap)called" << std::endl;
	this->_name = "Default";
	this->_attackDamage = 20;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
}

ScavTrap::~ScavTrap(void){
	std::cout << "Default destructor(ScavTrap) called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "Constructor with name called (ScavTrap)" << std::endl;
	this->_name = name;
	this->_attackDamage = 20;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
}

ScavTrap::ScavTrap(const ScavTrap & rhs){
	std::cout << "Copy assig. constructor called (ScavTrap)" << std::endl;
	this->_name = rhs._name;
	this->_attackDamage = rhs._attackDamage;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap & rhs){
	if (this != &rhs){
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
	}
	return *this;
}

void	ScavTrap::guardGate(void){
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->_energyPoints){
		std::cout << _name << "(ScavTrap) attacks " << target;
		std::cout << ", causing " << _attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}
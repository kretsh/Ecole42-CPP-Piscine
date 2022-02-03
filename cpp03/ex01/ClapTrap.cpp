/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:24:24 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 18:48:03 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	_name = "Default";
	std::cout << "Default constructor(Clap Trap)called" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Default destructor(Clap Trap) called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Constructor with name called (Clap Trap)" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap & rhs) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Copy assig. constructor called (Clap Trap)" << std::endl;
	_name = rhs._name;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints){
		std::cout << _name << "(ClapTrap) attacks " << target;
		std::cout << ", causing " << _attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
		std::cout << _name << " takes damage and loss ";
		std::cout << amount << " HP!" << std::endl;
		_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyPoints){
		std::cout << _name << " has repaired ";
		std::cout << amount << " HP " << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:24:24 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 16:37:20 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	_name = "Default";
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Constructor with name called" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap & rhs) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Copy assig. constructor called" << std::endl;
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
		std::cout << _name << " attacks " << target;
		std::cout << ", causing " << _attackDamage;
		std::cout << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
		std::cout << _name << " takes damage and loss ";
		std::cout << amount << " HP!" << std::endl;
		if (amount >= _hitPoints)
			ClapTrap::~ClapTrap();
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
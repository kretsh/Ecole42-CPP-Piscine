/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:31:36 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 17:56:43 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), _name("Default"){
	std::cout << "Default constructor(DiamondTrap)called" << std::endl;
	_energyPoints = ScavTrap::_energyPoints;
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	ScavTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
	std::cout << "Constructor with name (DiamondTrap) called" << std::endl;
	_name = name;
	_energyPoints = ScavTrap::_energyPoints;
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	ScavTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void){
	
}

DiamondTrap::DiamondTrap(const DiamondTrap & rhs){
	std::cout << "Copy assig. constructor called (DiamondTrap)" << std::endl;
	this->_name = rhs._name;
	this->_attackDamage = rhs._attackDamage;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap & rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		ClapTrap::_name = rhs.ClapTrap::_name;
		this->_attackDamage = rhs._attackDamage;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
	}
	return *this;
}


unsigned int	DiamondTrap::getAttack(void){
	return (this->_attackDamage);
}

void		DiamondTrap::whoAmI(void){
	std::cout << "My original name is " << _name << std::endl;
	std::cout << "My parents name is " << ClapTrap::_name << std::endl;
}
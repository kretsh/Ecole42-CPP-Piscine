/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:44:18 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:41:22 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "attributes.h"

AAnimal::AAnimal(void) : _type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::~AAnimal(void){
    std::cout << "Animal destructor has called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & rhs){
    std::cout << "Animal copy constructor called" << std::endl;
    this->_type = rhs._type;
}

AAnimal & AAnimal::operator=(const AAnimal & rhs){
    this->_type = rhs._type;
    return *this;
}

void    AAnimal::makeSound(void) const{
    std::cout << "WTF? WHO IS MAKING DAT SOUND" << std::endl;
}

std::string AAnimal::getType(void) const{
    return this->_type;
}


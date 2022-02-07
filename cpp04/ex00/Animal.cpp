/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:44:18 by cowen             #+#    #+#             */
/*   Updated: 2022/02/07 17:21:20 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "attributes.h"

Animal::Animal(void) : _type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(void){
    std::cout << "Animal destructor has called" << std::endl;
}

Animal::Animal(const Animal & rhs){
    this->_type = rhs._type;
}

Animal & Animal::operator=(const Animal & rhs){
    this->_type = rhs._type;
    return *this;
}

void    Animal::makeSound(void) const{
    std::cout << "WTF? WHO IS MAKING DAT SOUND" << std::endl;
}

std::string Animal::getType(void) const{
    return this->_type;
}


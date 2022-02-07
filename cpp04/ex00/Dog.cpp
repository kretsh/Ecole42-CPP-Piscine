/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:09:47 by cowen             #+#    #+#             */
/*   Updated: 2022/02/07 17:28:58 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void){
    std::cout << "Dog destructor has called" << std::endl;
}

Dog::Dog(const Dog & rhs){
    this->_type = rhs._type;
}

Dog & Dog::operator=(const Dog & rhs){
    this->_type = rhs._type;
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << "Bark Bark Bark!" << std::endl;
}

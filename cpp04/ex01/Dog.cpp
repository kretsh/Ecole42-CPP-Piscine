/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:09:47 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:14:23 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void){
    _type = "Dog";
    this->_brain = new Brain();
    this->_brain->fillIdeas("I want to eat and sleep");
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void){
    std::cout << "Dog destructor has called" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog & rhs){
    std::cout << "Dog copy constructor called" << std::endl;
    this->_type = rhs._type;
    this->_brain = new Brain(*(rhs._brain));
}

Dog & Dog::operator=(const Dog & rhs){  
    if (this != &rhs){
        this->_type = rhs._type;
        *(this->_brain) = *(rhs._brain);
    }
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << "Bark Bark Bark!" << std::endl;
}

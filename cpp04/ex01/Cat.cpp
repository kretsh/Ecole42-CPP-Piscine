/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:51:55 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:14:37 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
    _type = "Cat";
    this->_brain = new Brain();
    this->_brain->fillIdeas("I want to eat and sleep");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void){
    std::cout << "Cat destructor has called" << std::endl;
    delete _brain;
}

Cat::Cat(const Cat & rhs){
    std::cout << "Cat copy constructor called" << std::endl;
    this->_type = rhs._type;
    this->_brain = new Brain(*(rhs._brain));
}

Cat & Cat::operator=(const Cat & rhs){
    if (this != &rhs){
        this->_type = rhs._type;
        *(this->_brain) = *(rhs._brain);
    }
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "Meeeeeoooooowwwwwwwwww" << std::endl;
}


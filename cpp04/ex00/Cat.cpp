/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:51:55 by cowen             #+#    #+#             */
/*   Updated: 2022/02/07 17:28:44 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void){
    _type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(void){
    std::cout << "Cat destructor has called" << std::endl;
}

Cat::Cat(const Cat & rhs){
    this->_type = rhs._type;
}

Cat & Cat::operator=(const Cat & rhs){
    this->_type = rhs._type;
    return *this;
}

void    Cat::makeSound(void) const{
    std::cout << "Meeeeeoooooowwwwwwwwww" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:07:04 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 13:41:46 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void){
    _type = "cure";
}

Cure::~Cure(void){
    
}

Cure::Cure(const Cure& rhs){
    _type = rhs._type;
}

Cure& Cure::operator=(const Cure& rhs){
    this->_type = rhs._type;
    return *this;
}

AMateria* Cure::clone(void) const{
    Cure *temp = new Cure(*this);
    
    return temp;
}

void    Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:32:09 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 13:41:10 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void){
    _type = "ice";
}

Ice::~Ice(void){
    
}

Ice::Ice(const Ice& rhs){
    _type = rhs._type;
}

Ice& Ice::operator=(const Ice& rhs){
    this->_type = rhs._type;
    return *this;
}

AMateria* Ice::clone(void) const{
    Ice *temp = new Ice(*this);
    
    return temp;
}

void    Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


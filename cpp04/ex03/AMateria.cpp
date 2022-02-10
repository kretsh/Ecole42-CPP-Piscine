/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:13:31 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 13:42:32 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(void) : _type("unnamed"){

}

AMateria::~AMateria(void){
    
}

AMateria::AMateria(const AMateria& rhs){
    this->_type = rhs._type;
}

std::string const & AMateria::getType() const{
    
    return (this->_type);
}

AMateria& AMateria::operator=(const AMateria& rhs){
    this->_type = rhs._type;
    return *this;
}

void    AMateria::use(ICharacter& target){
    std::cout << "* Something doint with " << target.getName() << "." << std::endl;
}


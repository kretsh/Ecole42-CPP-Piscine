/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:30:55 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 16:16:14 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ground.hpp"

Ground::Ground(){
    initGround();
}

Ground::~Ground(){
    clearGround();
}

Ground::Ground(const Ground& rhs){
    this->_item = rhs._item;
}

Ground& Ground::operator=(const Ground& rhs){
    clearGround();
    this->_item = rhs._item;
    return *this;
}

void    Ground::initGround(void){
        _item = NULL;
}

void    Ground::clearGround(void){
    delete _item;
}

void    Ground::dropMateria(AMateria* newValue){
    if (_item){
        std::cout << "There is no empty space on the ground. Materia dissapered" << std::endl;
        delete newValue;
    }
    else{
        _item = newValue;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:13:12 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 16:30:36 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
    initSource();
}

MateriaSource::~MateriaSource(void){
    clearSource();
}

MateriaSource::MateriaSource(const MateriaSource& rhs){
    for (int i = 0; i < 4; i++){
        if (rhs._values[i])
            _values[i] = rhs._values[i]->clone();
        else
            _values[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs){
    clearSource();
    for (int i = 0; i < 4; i++){
        if (rhs._values[i])
            this->_values[i] = rhs._values[i]->clone();
        else
            this->_values[i] = NULL;
    }
    return *this;
}

void    MateriaSource::learnMateria(AMateria *value){
    int i;
        
    for (i = 0; i < 4; i++){
        if (_values[i]){
            continue ;
        }
        else{
            _values[i] = value;
            break ;
        }
    }
    if (i == 4){
        delete value;
    }
}

AMateria*   MateriaSource::createMateria(const std::string &to_find){
    for (int i = 0; i < 4; i++){
        if (_values[i]){
            if (!_values[i]->getType().compare(to_find)){
                return (_values[i]->clone());
            }
        }
    }
    return (NULL);
}

void    MateriaSource::clearSource(){
    for (int i = 0; i < 4; i++){
        if (_values[i]){
            delete _values[i];
        }
    }
}

void    MateriaSource::initSource(){
    for (int i = 0; i < 4; i++){
        _values[i] = NULL;
    }
}
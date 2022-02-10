/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:32:02 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 16:17:39 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default charachter"){
    initInventory();
}

Character::~Character(){
    clearInventory();
}

Character::Character(const std::string name) : _name(name){
    initInventory();
}

Character::Character(const Character& rhs) : _name("Default charachter"){
    for (int i = 0; i < 4; i++){
        if (rhs._inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

Character& Character::operator=(const Character& rhs){
    clearInventory();
    this->_name = rhs._name;
    for (int i = 0; i < 4; i++){
        if (rhs._inventory[i])
            this->_inventory[i] = rhs._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    return *this;
}

const std::string& Character::getName(void) const{
    return this->_name;
}

void    Character::equip(AMateria* newElement){
    int flag = 0;
    for (int i = 0; i < 4; i++){
        if (!_inventory[i]){
            flag = 1;
            _inventory[i] = newElement;
            break ;
        }
    }
    if (flag == 0){
        std::cout << "Inventory is full. Object was deleted" << std::endl;
        delete newElement;
    }
}

void    Character::unequip(int idx){
    if (idx >= 0 && idx <= 4){
        if (_inventory[idx]){
            _ground.dropMateria(_inventory[idx]);
            _inventory[idx] = NULL;
        }
        else
            std::cout << "This slot is empty" << std::endl;
    }
    else
        std::cout << "Hey mate, i've only 4 slots. Choose right one" << std::endl;
}

void    Character::clearInventory(void){
    for (int i = 0; i < 4; i++){
        if (_inventory[i]){
            delete _inventory[i];
        }
    }
}

void    Character::initInventory(void){
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

void Character::use(int idx, ICharacter& target){
    if (_inventory[idx]){
        _inventory[idx]->use(target);
        delete _inventory[idx];
        _inventory[idx] = NULL;
    }
    else
        std::cout << "I dont have materias at this slot" << std::endl;
}

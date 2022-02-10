/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:54:21 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 16:32:00 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"

Ground myGround;

int main() {
    std::cout << "---Materia Source Tests---" << std::endl;
    {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << std::endl << "---Clear memory---" << std::endl;
    delete src;
    }
    std::cout << std::endl;
    {
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << std::endl;
    MateriaSource* mvc = new MateriaSource(*src);
    std::cout << std::endl;
    *mvc = *src;
    std::cout << std::endl;
    std::cout << std::endl << "---Clear memory---" << std::endl;
    delete src;
    delete mvc;
    }
    std::cout << std::endl << "---Character Tests---" << std::endl;
    {
    ICharacter* me = new Character("me");
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    src->learnMateria(new Cure());
    tmp = src->createMateria("cure");
    bob->equip(tmp);
    bob->use(0, *bob);
    bob->use(0, *bob);
    std::cout << std::endl << "---Clear memory---" << std::endl;
    delete bob;
    delete me;
    delete src;
    }
    {
    std::cout << std::endl << "---Unequip Tests---" << std::endl;
    ICharacter* me = new Character("me");
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    
    std::cout << std::endl << "---Clear memory---" << std::endl;
    delete src;
    delete me;
    }
    return 0;
}


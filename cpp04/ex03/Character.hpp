/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:25:50 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 16:17:18 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ground.hpp"

class Character : public ICharacter{
    private:
        void    clearInventory();
        void    initInventory();
        AMateria*   _inventory[4];
        Ground      _ground;
        std::string _name;
    public:
        Character();
        ~Character();
        Character(const Character&);
        Character(const std::string);
        Character& operator=(const Character&);

        const std::string& getName() const;
        void equip(AMateria*);
        void unequip(int);
        void use(int, ICharacter&);
};

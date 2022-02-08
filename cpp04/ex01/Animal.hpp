/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:38:27 by cowen             #+#    #+#             */
/*   Updated: 2022/02/07 20:40:24 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include "attributes.h"

class Animal{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal&);
        virtual ~Animal();
        
        Animal& operator=(const Animal&);
        
        virtual void    makeSound() const;
        std::string     getType() const;
};

#endif
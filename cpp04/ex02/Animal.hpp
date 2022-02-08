/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:38:27 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:41:40 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include "attributes.h"

class AAnimal{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal&);
        virtual ~AAnimal();
        
        AAnimal& operator=(const AAnimal&);
        
        virtual void    makeSound() const = 0;
        std::string     getType() const;
};

#endif
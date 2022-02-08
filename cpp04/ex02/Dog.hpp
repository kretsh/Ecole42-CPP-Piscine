/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:09:51 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:42:19 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
#define DOG

#include "attributes.h"

class Dog : public AAnimal{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog&);
        ~Dog();
        Dog& operator=(const Dog&);
        void makeSound() const;
};

#endif

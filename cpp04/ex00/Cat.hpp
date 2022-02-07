/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:52:05 by cowen             #+#    #+#             */
/*   Updated: 2022/02/07 17:29:14 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT

#include "attributes.h"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat&);
        ~Cat();
        Cat& operator=(const Cat&);
        void makeSound() const;
};

#endif


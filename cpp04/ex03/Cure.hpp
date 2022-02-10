/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:03:03 by cowen             #+#    #+#             */
/*   Updated: 2022/02/09 21:42:35 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{
    public:
        Cure();
        ~Cure();
        Cure(const Cure&);
        Cure&    operator=(const Cure&);
        
        AMateria*   clone() const;
        void        use(ICharacter& target);         
};


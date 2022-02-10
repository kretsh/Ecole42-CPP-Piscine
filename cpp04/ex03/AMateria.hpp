/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:13:34 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 13:31:07 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class AMateria{
    protected:
        std::string _type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(const AMateria&);
        AMateria(std::string const & type);

        AMateria& operator=(const AMateria&);
        
        std::string const & getType() const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
        
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:14:32 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 16:15:50 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ground{
    private:
        AMateria*   _item;
        void        initGround();
    public:
        void        clearGround();
        Ground();
        Ground(const Ground&);
        ~Ground();
        Ground& operator=(const Ground&);

        void    dropMateria(AMateria*);
};
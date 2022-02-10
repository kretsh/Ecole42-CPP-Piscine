/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:11:47 by cowen             #+#    #+#             */
/*   Updated: 2022/02/10 13:28:06 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        void    clearSource();
        void    initSource();
        AMateria* _values[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource&);
        MateriaSource& operator=(const MateriaSource&);

        void learnMateria(AMateria*);
        AMateria* createMateria(const std::string&);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:14:40 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:07:57 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Brain{
    private:
        void    copyIdeas(const Brain&);
        std::string ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain&);
        Brain& operator=(const Brain&);
        
        void    fillIdeas(std::string);        
};
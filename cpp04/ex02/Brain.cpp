/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:14:37 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 16:13:13 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "attributes.h"

Brain::Brain(void){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& rhs){
    copyIdeas(rhs);
}

Brain& Brain::operator=(const Brain& rhs){
    copyIdeas(rhs);
    return *this;
}

void Brain::copyIdeas(const Brain& rhs){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = rhs.ideas[i];
    }
}

void Brain::fillIdeas(std::string idea){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = idea;
    }
}
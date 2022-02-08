/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:35 by cowen             #+#    #+#             */
/*   Updated: 2022/02/08 17:44:34 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "attributes.h"

void Zoo(AAnimal **zoo){
    for (int i = 0; i < N; i++){
        if (i % 2){
            zoo[i] = new Dog();
        }
        else
            zoo[i] = new Cat();
    }
}


void deleteZoo(AAnimal **zoo){
    for (int i = 0; i < N; i++){
        delete zoo[i];
    }
}

int main() {
    Dog* a1 = new Dog();
    Dog* a2 = new Dog(*a1);
    AAnimal* a3 = new Dog();
    // AAnimal  a4;
    std::cout << std::endl << std::endl;
    AAnimal* zoo[N];

    *a3 = *a2;
    Zoo(zoo);
    deleteZoo(zoo);
    delete a1;
    delete a2;
    delete a3;
}
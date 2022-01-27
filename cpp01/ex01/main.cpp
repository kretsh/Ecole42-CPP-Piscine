/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:05:12 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 18:52:14 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void){
	int zombies_count = 42;
	Zombie *zombie;
	
	zombie = zombieHorde(zombies_count, "Oleg");
	for (int i = 0; i < zombies_count; i++)
		zombie[i].announce();
	delete [] zombie;
}

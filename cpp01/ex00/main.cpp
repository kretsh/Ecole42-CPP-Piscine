/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:05:12 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 16:29:51 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void){
	Zombie *zombie;
	
	zombie = newZombie("Oleg");
	zombie->announce();
	randomChump("Kalek");
	delete zombie;
}

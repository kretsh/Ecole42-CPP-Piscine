/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:12:56 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 18:49:08 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name){
	Zombie* zombie = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombie[i].setName(name);
	}
	return (zombie);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:59 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 17:50:49 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap a;
	DiamondTrap b("Fedor");

	std::cout << std::endl << "Name of DiamondTrap a is " << a.getName() << std::endl;
	std::cout << "He has :" << std::endl;
	std::cout << a.getAttack() << " Attack points" << std::endl;
	std::cout << a.getHealth() << " Health points" << std::endl;
	std::cout << a.getEnergy() << " Energy points" << std::endl << std::endl;
	std::cout << "Name of DiamondTrap b is " << b.getName() << std::endl;
	std::cout << "He has :" << std::endl;
	std::cout << b.getAttack() << " Attack points" << std::endl;
	std::cout << b.getHealth() << " Health points" << std::endl;
	std::cout << b.getEnergy() << " Energy points" << std::endl << std::endl;
	
	b.attack("Someone");
	b.takeDamage(0);
	b.beRepaired(10);
	b.highFivesGuys();
	b.whoAmI();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:59 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 16:27:41 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	FragTrap a;
	FragTrap b("Fedor");

	std::cout << std::endl << "Name of ScavTrap a is " << a.getName() << std::endl;
	std::cout << "He has :" << std::endl;
	std::cout << a.getAttack() << " Attack points" << std::endl;
	std::cout << a.getHealth() << " Health points" << std::endl;
	std::cout << a.getEnergy() << " Energy points" << std::endl << std::endl;
	std::cout << "Name of ScavTrap b is " << b.getName() << std::endl;
	std::cout << "He has :" << std::endl;
	std::cout << b.getAttack() << " Attack points" << std::endl;
	std::cout << b.getHealth() << " Health points" << std::endl;
	std::cout << b.getEnergy() << " Energy points" << std::endl << std::endl;
	
	b.attack("Someone");
	b.takeDamage(0);
	b.beRepaired(10);
	b.highFivesGuys();
}
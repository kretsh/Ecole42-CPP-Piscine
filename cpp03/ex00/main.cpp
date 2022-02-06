/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:59 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 16:12:26 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap a;
	ClapTrap b("Fedor");

	std::cout << std::endl << "Name of ClapTrap a is " << a.getName() << std::endl;
	std::cout << "He has :" << std::endl;
	std::cout << a.getAttack() << " Attack points" << std::endl;
	std::cout << a.getHealth() << " Health points" << std::endl;
	std::cout << a.getEnergy() << " Energy points" << std::endl << std::endl;
	std::cout << "Name of ClapTrap b is " << b.getName() << std::endl;
	std::cout << "He has :" << std::endl;
	std::cout << b.getAttack() << " Attack points" << std::endl;
	std::cout << b.getHealth() << " Health points" << std::endl;
	std::cout << b.getEnergy() << " Energy points" << std::endl << std::endl;
	
	b.attack("Someone");
	b.takeDamage(0);
	b.beRepaired(10);
}
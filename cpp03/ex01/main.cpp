/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:59 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 20:25:48 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	ClapTrap a;
	ClapTrap b("Fedor");
	ScavTrap c("Mishka");
	
	a.attack("Fedor");
	b.takeDamage(0);
	c.attack("Fedor");
	b.takeDamage(20);
	b.beRepaired(0);
	c.beRepaired(5);
	c.guardGate();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:22:59 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 20:27:58 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	ClapTrap a;
	ClapTrap b("Fedor");
	ScavTrap c("Mishka");
	FragTrap d("Svyatogor");
	
	a.attack("Fedor");
	b.takeDamage(0);
	c.attack("Fedor");
	b.takeDamage(20);
	b.beRepaired(0);
	c.beRepaired(5);
	c.guardGate();
	d.attack("Mishka");
	c.takeDamage(20);
	c.attack("Svyatogor");
	d.takeDamage(10);
	d.highFivesGuys();
}
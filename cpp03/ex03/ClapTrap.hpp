/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:25:07 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 16:17:32 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>

class ClapTrap{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string);
		ClapTrap(const ClapTrap & rhs);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap & rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int	getHealth(void);
		unsigned int	getEnergy(void);
		unsigned int	getAttack(void);
		std::string		getName(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:03:47 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 18:47:45 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string);
		ScavTrap(const ScavTrap&);
		~ScavTrap(void);
		ScavTrap operator=(const ScavTrap & rhs);
		void	guardGate(void);
		void 	attack(const std::string& target);
};
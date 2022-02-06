/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:03:47 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 16:33:18 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string);
		ScavTrap(const ScavTrap&);
		~ScavTrap(void);
		ScavTrap&	operator=(const ScavTrap & rhs);
		void	guardGate(void);
		void 	attack(const std::string& target);
};
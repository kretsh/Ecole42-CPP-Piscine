/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:38:26 by cowen             #+#    #+#             */
/*   Updated: 2022/02/06 16:37:39 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(const std::string);
		FragTrap(const FragTrap & rhs);
		~FragTrap();
		
		FragTrap&	operator=(const FragTrap & rhs);
		void		highFivesGuys(void);
	protected:
		unsigned int	_attackDamage;
};
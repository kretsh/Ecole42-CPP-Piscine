/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:38:26 by cowen             #+#    #+#             */
/*   Updated: 2022/02/03 20:29:39 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(const std::string);
		FragTrap(const FragTrap & rhs);
		~FragTrap();
		
		FragTrap	operator=(const FragTrap & rhs);
		void		highFivesGuys(void);
};
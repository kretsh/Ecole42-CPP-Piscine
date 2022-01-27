/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:38:19 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 21:44:30 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "iostream"

class HumanA{
	private:
		Weapon&		_weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack(void);
};
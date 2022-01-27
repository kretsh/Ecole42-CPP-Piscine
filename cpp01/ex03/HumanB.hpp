/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:58:51 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 21:58:25 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.hpp"
#include "iostream"

class HumanB{
	private:
		Weapon*		_weapon;
		std::string _name;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon& weapon);
};
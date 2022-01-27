/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 19:05:28 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 21:55:04 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon{
	private:
		std::string _weapon;
		// std::string& _weaponREF;
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		
		const std::string& getType(void);
		void setType(std::string);
};	

#endif
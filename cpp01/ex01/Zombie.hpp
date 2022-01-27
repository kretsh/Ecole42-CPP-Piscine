/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:44:07 by cowen             #+#    #+#             */
/*   Updated: 2022/01/25 18:47:52 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie{
	private:
		std::string _name;
		
	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		
		void announce(void);
		std::string getName(void);
		void		setName(std::string name);
};
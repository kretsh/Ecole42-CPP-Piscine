/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:26:25 by cowen             #+#    #+#             */
/*   Updated: 2022/01/27 14:04:39 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Karen{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Karen::*_funcas[4])(void);
        
		std::string _phrase[4];
	public:
		Karen(void);
		~Karen(void);
		void complain(std::string);
};
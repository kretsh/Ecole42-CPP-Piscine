/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:25:19 by cowen             #+#    #+#             */
/*   Updated: 2022/02/15 15:38:55 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	private:
		AForm* (Intern::*_funcas[3])(std::string);
		AForm* createPresident(std::string);
		AForm* createRobot(std::string);
		AForm* createShrubb(std::string);
		class IncorrectForm : public std::exception{
			const char * what () const throw ();
		};
	public:
		Intern();
		~Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		AForm* makeForm(std::string, std::string);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:25:17 by cowen             #+#    #+#             */
/*   Updated: 2022/02/15 15:41:40 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	_funcas[0] = &Intern::createPresident;
	_funcas[1] = &Intern::createRobot;
	_funcas[2] = &Intern::createShrubb;

}

const char * Intern::IncorrectForm::what() const throw(){
	return ("Incorrect form");
}

AForm* Intern::createPresident(std::string target){
	return new PresidentialPardonForm(target);
}

AForm* Intern::createRobot(std::string target){
	return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubb(std::string target){
	return new ShrubberyCreationForm(target);
}

Intern::~Intern(){

}

Intern::Intern(const Intern& rhs){
 (void) rhs;
}

Intern& Intern::operator=(const Intern& rhs){
	(void) rhs;
	return *this;
}

AForm* Intern::makeForm(std::string formName,std::string target){
	std::string phrases[3] = {"robotomy request", "president request", "shrubbery request"};
	enum phrasesList{ROBOT_F, PRESIDENT_F, SHRUBB_F};
	int i = 0;

	while (i < 3 && formName.compare(phrases[i])){
		i++;
	}
	switch (i)
	{
	case ROBOT_F:
		return (this->*(_funcas[ROBOT_F]))(target);
	case PRESIDENT_F:
		return (this->*(_funcas[PRESIDENT_F]))(target);
	case SHRUBB_F:
		return (this->*(_funcas[SHRUBB_F]))(target);
	default:
		throw Intern::IncorrectForm();
	}
}
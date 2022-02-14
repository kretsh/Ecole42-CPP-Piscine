/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:21:49 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:54:41 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm::AForm("RobotForm", 72, 45), _target("home"){

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("RobotForm", 72, 45),_target(target){
	
}

RobotomyRequestForm::~RobotomyRequestForm(){

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs) : AForm::AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec()){
	_target = rhs._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs){
	if (this != &rhs){
		std::cout << "You can't assign this type of Forms";
	}
	return *this;
}

void RobotomyRequestForm::subExecute(void) const{
	std::srand(time(NULL));
	int iSecret = std::rand() % 101 + 1;
	if (iSecret <= 51)
		std::cout << "** some drilling noises. ** " << this->_target << " has been robotomized" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:21:49 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:54:41 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm::AForm("PresidentForm", 25, 5), _target("home"){

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm::AForm("PresidentForm", 25, 5),_target(target){
	
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs) : AForm::AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec()){
	_target = rhs._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs){
	if (this != &rhs){
		std::cout << "You can't assign this type of Forms";
	}
	return *this;
}

void PresidentialPardonForm::subExecute(void) const{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
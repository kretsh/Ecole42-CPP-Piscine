/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:54:18 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:16:31 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm() : _name("default form"), _signed(false), _gradeSign(1), _gradeExec(100){

}

AForm::AForm(const AForm& rhs) : _name(rhs._name), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec){
	this->_signed = rhs._signed;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec){
	
}

AForm::~AForm(){

}

const char * AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too Low");
}

const char * AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too High");
}

const char * AForm::FormIsNotSignedException::what() const throw(){
	return ("Form is not signed!");
}

AForm& AForm::operator=(const AForm& rhs){
	if (this != &rhs){
		std::cout << "You cant assign one form to another form!" << std::endl;
	}
	return *this;
}

bool	AForm::beSigned(const Bureaucrat& person){
	if (person.getGrade() <= _gradeSign){
		if (_signed == false){
			_signed = true;
			return (true);
		}
		else
			return (false);
	}
	else
		throw AForm::GradeTooLowException();

}

std::string AForm::getName(void) const{
	return _name;
}

bool	AForm::getSigned(void) const{
	return _signed;
}

int		AForm::getGradeSign(void) const{
	return _gradeSign;
}

int		AForm::getGradeExec(void) const{
	return _gradeExec;
}

void	AForm::execute(Bureaucrat const& executor) const{
	if (_gradeExec < executor.getGrade())
		throw AForm::GradeTooLowException();
	else{
		if (this->_signed){
			if (executor.getInit())
				std::cout << executor.getName() << " executed " << this->getName() << std::endl;
			subExecute();
		}
		else
			throw AForm::FormIsNotSignedException();
	}
}



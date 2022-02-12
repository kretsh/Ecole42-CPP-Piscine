/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:54:18 by cowen             #+#    #+#             */
/*   Updated: 2022/02/12 16:26:25 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default form"), _signed(false), _gradeSign(1), _gradeExec(100){

}

Form::Form(const Form& rhs) : _name(rhs._name), _gradeSign(rhs._gradeSign), _gradeExec(rhs._gradeExec){
	this->_signed = rhs._signed;
}

Form::~Form(){

}

const char * Form::GradeTooLowException::what() const throw(){
	return ("Grade is too Low");
}

const char * Form::GradeTooHighException::what() const throw(){
	return ("Grade is too High");
}


Form& Form::operator=(const Form& rhs){
	if (this != &rhs){
		std::cout << "You cant assign one form to another form!" << std::endl;
	}
	return *this;
}

bool	Form::beSigned(const Bureaucrat& person){
	if (person.getGrade() <= _gradeSign){
		if (_signed == false){
			_signed = true;
			return (true);
		}
		else
			return (false);
	}
	else
		throw Form::GradeTooLowException();

}

std::string Form::getName(void) const{
	return _name;
}

bool	Form::getSigned(void) const{
	return _signed;
}

int		Form::getGradeSign(void) const{
	return _gradeSign;
}

int		Form::getGradeExec(void) const{
	return _gradeExec;
}



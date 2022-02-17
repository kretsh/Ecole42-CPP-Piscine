/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:29:17 by cowen             #+#    #+#             */
/*   Updated: 2022/02/12 17:10:35 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::TooHighException::what() const throw(){
	return ("Grade is too high");
}

const char * Bureaucrat::TooLowException::what() const throw(){
	return ("Grade is too Low");
}

Bureaucrat::Bureaucrat(void) : _name("default name"), _grade(3){

}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) : _name(rhs._name){
	_grade = rhs._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void){
	
}

int	Bureaucrat::getGrade(void) const{
	return _grade;
}


const std::string Bureaucrat::getName(void) const{
	return _name;
}

void Bureaucrat::increment(void){
	if (_grade == 1){
		throw Bureaucrat::TooHighException();
	}
	else
		_grade--;
}

void Bureaucrat::decrement(void){
	if (_grade == 150){
		throw Bureaucrat::TooLowException();
	}
	else
		_grade++;
}

void Bureaucrat::signForm(Form &Form){
	if (Form.beSigned(*this))
		std::cout << this->_name << " signed " << Form.getName();
	else
		std::cout << this->_name << " couldn\'t sign " << Form.getName() << " because its allready signed.";
		std::cout << std::endl;
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat &rhs){
	stream << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return stream;
}
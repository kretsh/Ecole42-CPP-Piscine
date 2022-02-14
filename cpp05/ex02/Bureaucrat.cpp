/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:29:17 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:17:47 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char * Bureaucrat::TooHighException::what() const throw(){
	return ("Grade is too high");
}

const char * Bureaucrat::TooLowException::what() const throw(){
	return ("Grade is too Low");
}

Bureaucrat::Bureaucrat(void) : _name("default name"), _grade(3), _init(false){

}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) : _name(rhs._name){
	_grade = rhs._grade;
	_init = rhs._init;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
	if (this != &rhs){
		this->_grade = rhs._grade;
		this->_init = rhs._init;
	}
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

bool	Bureaucrat::getInit(void) const{
	return _init;
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

void Bureaucrat::signForm(AForm &Form){
	if (Form.beSigned(*this))
		std::cout << this->_name << " signed " << Form.getName();
	else
		std::cout << this->_name << " couldn\'t sign " << Form.getName() << " because its allready signed.";
		std::cout << std::endl;
}

void Bureaucrat::executeForm(const AForm& Form){
	this->_init = true;
	Form.execute(*this);
	this->_init = false;
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat &rhs){
	stream << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return stream;
}
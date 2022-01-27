/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:36:20 by cowen             #+#    #+#             */
/*   Updated: 2022/01/24 17:24:00 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Contact::Contact(void){
	
	this->_init = false;
	return ;
}

Contact::~Contact(void){

	return ;
}

void Contact::setIndex(int index){
	this->_index = index + 1;
}

void Contact::setFirstName(std::string FirstName){
	
	this->_firstname = FirstName;
}

void Contact::setLastName(std::string LastName){
	
	this->_lastname = LastName;
}

void Contact::setNickName(std::string NickName){

	this->_nickname = NickName;
}


void Contact::setPhoneNumber(long double Phone){

	this->_phonenumber = Phone;
}

void Contact::setSecret(std::string Secret){
	
	this->_init = true;
	this->_secret = Secret;
}

std::string	Contact::getFirstName(void){

	return this->_firstname;
}

std::string	Contact::getLastName(void){

	return this->_lastname;
}

std::string	Contact::getNickName(void){

	return this->_nickname;
}

long double	Contact::getPhoneNumber(void){

	return this->_phonenumber;
}


std::string	Contact::getSecret(void){

	return this->_secret;
}

bool	Contact::getInit(void){
	return this->_init;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:43:14 by cowen             #+#    #+#             */
/*   Updated: 2022/01/24 17:57:14 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

Phonebook::Phonebook(void){
	
	return ;
}

Phonebook::~Phonebook(void){

	return ;
}

void	Phonebook::AddContact(void){
	std::string temp;
	

	if (this->index == 8)
		this->index = 0;
	Index();
	FirstName(temp);
	LastName(temp);
	NickName(temp);
	PhoneNumber();
	DarkestSecret(temp);
	this->index += 1;
}

void	Phonebook::SearchContact(void){
	int			index = 0;
	
	for (int i = 0; i < 18; i++){
		if (i % 2 == 0 && this->contacts[index].getInit() == true){
			std::cout << std::setfill('#') << std::setw(49) << "#";
			std::cout << std::endl;
		}
		else if (i != 0 && i != 1 && i % 2 != 0 && this->contacts[index].getInit() == true){
			
			searchIndex(index);
			searchFirstName(index);
			searchLastName(index);
			searchNickName(index);

			std::cout << std::endl;
			index += 1;
		}
		if (i == 1){
			std::cout << "@   Index   | FirstName | LastName  | NickName  @";
			std::cout << std::endl;
		}
		
	}
	std::cout << std::setfill('#') << std::setw(49) << "#" << std::endl;
	std::cout << "Please enter contact id to look at: ";
	viewContact();
	std::cout << std::endl;
}

void Phonebook::viewContact(void){
	long double	id;
	
	std::cin >> std::get_money(id);
	if (std::cin.fail())
	{
		std::cout << "ID may have digits only. Cya. " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(),'\n');
		return ;
	}
	if (id < 0 || id > 8){
		std::cout << "Incorrect id. Cya." << std::endl;
		return ;
	}
	else{
		if (this->contacts[(int)id - 1].getInit() == false){
			std::cout << "This contact was not init yeat." << std::endl;
			return ;
		}
		else{
			std::cout << "Name: " << this->contacts[(int)id - 1].getFirstName() << std::endl;
			std::cout << "Last name: " << this->contacts[(int)id - 1].getLastName() << std::endl;
			std::cout << "Nick name: " << this->contacts[(int)id - 1].getNickName() << std::endl;
			std::cout << "Phone number: " << this->contacts[(int)id - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->contacts[(int)id - 1].getSecret() << std::endl;
			std::cout << std::endl;
		}
	}
}

void	Phonebook::Index(void){
	
	this->contacts[this->index].setIndex(this->index);
}


void	Phonebook::searchIndex(int index){
	
	std::cout << "@";
	std::cout << std::setfill(' ') << std::setw(11);
	std::cout << index + 1 << "";
	this->contacts[this->index].setIndex(this->index);
}


void Phonebook::searchNickName(int index){
	{
	int			temp_var;
	std::string temp;
	
	std::cout << std::setfill(' ') << std::setw(10);
	temp_var = this->contacts[index].getNickName().size();
	if (temp_var > 10){
		temp = this->contacts[index].getNickName().substr(0, 9);
		temp.push_back('.');
		temp.insert(0, " ");
		std::cout << temp << "@";
	}
	else{
		temp = this->contacts[index].getNickName();
		std::cout << temp << " @";
	}
}
}


void Phonebook::searchFirstName(int index)
{
	int			temp_var;
	std::string temp;
	
	std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(10);
	temp_var = this->contacts[index].getFirstName().size();
	if (temp_var > 10){
		temp = this->contacts[index].getFirstName().substr(0, 9);
		temp.push_back('.');
		temp.insert(0, " ");
		std::cout << temp << "|";
	}
	else{
		temp = this->contacts[index].getFirstName();
		std::cout << temp << " |";
	}
}

void Phonebook::searchLastName(int index)
{
	int			temp_var;
	std::string temp;
	
	std::cout << std::setfill(' ') << std::setw(10);
	temp_var = this->contacts[index].getLastName().size();
	if (temp_var > 10){
		temp = this->contacts[index].getLastName().substr(0, 9);
		temp.push_back('.');
		temp.insert(0, " ");
		std::cout << temp << "|";
	}
	else{
		temp = this->contacts[index].getLastName();
		std::cout << temp << " |";
	}
}


void	Phonebook::FirstName(std::string temp){
	std::cout << "Please enter first name of your contact: ";
	std::cin >> temp;
	if (!std::cin)
		exit(1);
	this->contacts[this->index].setFirstName(temp);
}

void	Phonebook::LastName(std::string temp){

	std::cout << "Please enter last name of your contact: ";
	std::cin >> temp;
	if (!std::cin)
			exit(1);
	this->contacts[this->index].setLastName(temp);
}

void	Phonebook::NickName(std::string temp){

	std::cout << "Please enter nickname of your contact: ";
	std::cin >> temp;
	if (!std::cin)
			exit(1);
	this->contacts[this->index].setNickName(temp);
}

void	Phonebook::PhoneNumber(){
	
	long double temp_l;
	
	std::cout << "Please enter phonenumber of your contact: ";
	std::cin >> std::get_money(temp_l);
	if (std::cin.fail())
	{
		std::cout << "Phone number may have digits only. Please retry: " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(),'\n');
		PhoneNumber();
	}
	this->contacts[this->index].setPhoneNumber(temp_l);
}


void	Phonebook::DarkestSecret(std::string temp){

	std::cout << "Please enter your darkest secret: ";
	std::cin >> temp;
	if (!std::cin)
			exit(1);
	this->contacts[this->index].setSecret(temp);
}

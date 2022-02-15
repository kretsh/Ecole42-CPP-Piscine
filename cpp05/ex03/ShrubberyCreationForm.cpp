/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:46:53 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:31:01 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("ShrubbForm", 145, 137), _target("home"){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("ShrubbForm", 145, 137), _target(target){

}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs) : AForm::AForm(rhs.getName(), rhs.getGradeSign(), rhs.getGradeExec()){
	_target = rhs._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
	if (this != &rhs){
		std::cout << "You can't assign this type of Forms";
	}
	return *this;
}

void ShrubberyCreationForm::subExecute(void) const{
	std::string		target(_target);
	std::ofstream	ofs(target.append("_shrubbery"), std::ofstream::trunc);

	ofs << "              v .   ._, |_  .," << std::endl;
    ofs << "       `-._\\/  .  \\ /    |/_" << std::endl;
    ofs << "           \\  _\\, y | \\//" << std::endl;
    ofs << "     _\\_.___\\, \\/ -.\\||" << std::endl;
    ofs << "       `7-,--.`._||  / / ," << std::endl;
    ofs << "       /'     `-. `./ / |/_.'" << std::endl;
    ofs << "                 |    |//" << std::endl;
    ofs << "                 |_    /" << std::endl;
    ofs << "                 |-   |" << std::endl;
    ofs << "                 |   =|" << std::endl;
    ofs << "                 |    |" << std::endl;
	ofs << "----------------/ ,  . \\--------._" << std::endl;
	ofs.close();
}


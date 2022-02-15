/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:13:05 by cowen             #+#    #+#             */
/*   Updated: 2022/02/15 15:42:03 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	{
		try
		{
			Bureaucrat a1;
			Intern  someRandomIntern;
   			AForm*   rrf;
    		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			a1.signForm(*rrf);
			a1.executeForm(*rrf);
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}
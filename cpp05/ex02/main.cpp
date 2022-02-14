/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:13:05 by cowen             #+#    #+#             */
/*   Updated: 2022/02/14 19:53:27 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	// {
	// try
	// {
	// 	AForm* a = new ShrubberyCreationForm("hesb");
	// 	Bureaucrat b;
	// 	a->beSigned(b);
	// 	a->execute(b);
	// 	b.executeForm(*a);
	// 	a->execute(b);
	
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// }
	{
		try
		{
			AForm* a = new RobotomyRequestForm("lolkek");
			Bureaucrat b;
			// a->beSigned(b);
			// a->execute(b);
			b.signForm(*a);
			b.executeForm(*a);
			// a->execute(b);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
}
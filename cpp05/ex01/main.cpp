/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:13:05 by cowen             #+#    #+#             */
/*   Updated: 2022/02/12 17:08:20 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main(){
	{
	Bureaucrat	leader;
	Form		newForm;
	try
	{
		leader.signForm(newForm);
		leader.signForm(newForm);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
	}
	Bureaucrat	leader;
	Form		newForm;
	try
	{
		leader.increment();
		leader.increment();
		leader.signForm(newForm);
		leader.signForm(newForm);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << '\n';
	}
}
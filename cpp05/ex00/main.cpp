/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:13:05 by cowen             #+#    #+#             */
/*   Updated: 2022/02/11 22:28:09 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>

int main(){
	Bureaucrat leader;
	try
	{
		leader.increment();
		std :: cout << leader << std :: endl;
		leader.increment();
		std :: cout << leader << std :: endl;
		leader.increment();
	}
	catch(std::exception & e)
	{
		std :: cout << leader << std :: endl;
		std::cout << e.what() << '\n';
	}
	
}
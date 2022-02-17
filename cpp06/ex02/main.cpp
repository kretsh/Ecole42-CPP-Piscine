/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:03:35 by cowen             #+#    #+#             */
/*   Updated: 2022/02/17 20:11:47 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void){
	Base* temp = NULL;

	temp = generate();
	identify(temp);
	identify(*temp);

}

void identify(Base& p){
	try
	{
		A& new_A = dynamic_cast<A&>(p);
		(void) new_A;
		std::cout << "This reference is for A class" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B& new_B = dynamic_cast<B&>(p);
			(void) new_B;
			std::cout << "This reference is for B class" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C& new_C = dynamic_cast<C&>(p);
				(void) new_C;
				std::cout << "This reference is for C class" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "This reference is for Base class" << std::endl;
			}
		}
	}
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "This class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This class is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This class is C" << std::endl;
	else
		std::cout << "This class is Base" << std::endl;
}


Base * generate(void){
	std::srand(time(NULL));
	int iSecret = std::rand() % 3;
	Base *a = NULL;
	switch (iSecret)
	{
	case 0:
		a = new A();
		break;
	case 1:
		a = new B();
		break;
	case 2:
		a = new C();
		break;
	default:
		break;
	}
	return a;
}
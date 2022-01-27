/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:28:34 by cowen             #+#    #+#             */
/*   Updated: 2022/01/21 21:32:53 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(void){
	
	Phonebook 	phoneb;
	std::string	str;
	
	std::cout << "Hello and Welcome to phonebook" << std::endl;
	while (1){
		std::cout << "Enter command \"ADD\" \"EXIT\" or \"SEARCH\"" << std::endl;
		std::cin >> str;
		if (!std::cin)
			exit(1);
		for (size_t i = 0; str.length() != i; i++)
			str[i] = std::toupper(str[i]);
		check_argument(str, &phoneb);
	}
	
	
}

void	check_argument(std::string str, Phonebook* phoneb)
{
	if (str.compare("ADD") == 0)
		phoneb->AddContact();
	else if (str.compare("SEARCH") == 0)
		phoneb->SearchContact();
	else if (str.compare("EXIT")== 0)
		exit(0);
	
	else
		std::cout << "Wrong command has been passed." << std::endl;
}

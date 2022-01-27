/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:12:39 by cowen             #+#    #+#             */
/*   Updated: 2022/01/19 13:04:36 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{	
	if (argc != 1){
		for (int i = 1; argv[i]; i++){
			std::string	str(argv[i]);
			for (int y = 0; argv[i][y]; y++){
				str[y] = std::toupper(argv[i][y]);
			}
			std::cout << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
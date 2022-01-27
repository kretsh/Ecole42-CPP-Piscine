/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:56:30 by cowen             #+#    #+#             */
/*   Updated: 2022/01/27 14:53:59 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>

int main(int argc, char* argv[]){
	Karen 		karen;
	
	if (argc == 2){
		std::string	arg(argv[1]);
		karen.complain(arg);	
	}
	return (0);
}
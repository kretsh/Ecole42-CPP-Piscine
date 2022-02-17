/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:59:16 by cowen             #+#    #+#             */
/*   Updated: 2022/02/17 16:46:07 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char* argv[]){
	if (argc != 2){
		std::cout << "Error amount of arguments" << std::endl;
		return 1;
	}
	try
	{
		parsing_elements(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
  	return 0;
}

int check_argv(std::string str){
	if (str.size() == 1){
		if ((str[0] >= 20 && str[0] < 48) || (str[0] > 57 && str[0] <= 126))
			return CHAR;
	}
	return 0;
}

void parsing_elements(char *argv[]){
	double	b = 0;
	int		integer = 0;
	char	symbol = 0;
	float	dotint = 0;

	std::string temp(argv[1]);
	switch (check_argv(temp))
	{
	case CHAR:
		b = static_cast<double> (*argv[1]);
		integer = static_cast<int> (b);
		symbol = static_cast<char> (b);
		dotint = static_cast<float> (b);
		break;
	
	default:
		b = std::stod(temp);
		integer = static_cast<int> (b);
		symbol = static_cast<char> (b);
		dotint = static_cast<float> (b);
		break;
	}
	if ((integer >= 0 && integer < 20) || integer == 127){
		std::cout << "char: Non displayable" << std::endl;
	}
	else if (integer >= 20 && integer < 127)
		std::cout << "char: \'" << symbol << "\'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (std::numeric_limits<int>::max() < b || std::numeric_limits<int>::min() > b || b != b)
		std::cout << "int: impossible" << std::endl;
	else
  		std::cout << "int: " << integer << std::endl;
	std::cout.precision(1);
  	std::cout << "double: " << std::fixed << b << std::endl;
	std::cout << "float: " << dotint << "f" << std::endl;
}



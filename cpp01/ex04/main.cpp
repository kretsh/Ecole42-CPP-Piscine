/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:22:44 by cowen             #+#    #+#             */
/*   Updated: 2022/01/27 19:12:32 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char *argv[]){
	if (argc != 4){
		std::cout << "Error, please pass corect arguments" << std::endl;
		exit (2);
	}
	std::string		filename(argv[1]);
	std::string		findarg(argv[2]);
	std::string		tochange(argv[3]);

	new_buffer(filename, findarg, tochange);
}

void new_buffer(std::string filename, std::string findarg, std::string tochange){
	int				flag = 0;
	std::size_t		prev_pos = 0;
	std::size_t		pos = 0;
	std::string		output;
	std::string		buffer;
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename.append(".replace"), std::ofstream::trunc);
	
	if (!ifs.is_open()){
		std::cout << "Incorrect input file" << std::endl;
		exit (1);
	}
	while (true){
		if (flag == 0)
			getline(ifs, buffer);
		pos = buffer.find(findarg, pos);
		if (pos == std::string::npos){
			output += buffer.substr(prev_pos, pos);
			output += '\n';
			flag = 0;
			pos = 0;
			prev_pos = 0;
		}
		else{
			output += buffer.substr(prev_pos, pos - prev_pos);
			output += tochange;
			prev_pos = pos + findarg.size();
			pos = prev_pos;
			if (pos >= buffer.size()){
				output += '\n';
				flag = 0;
				pos = 0;
				prev_pos = 0;
			}
			else
				flag = 1;
		}
		if (ifs.eof() && flag == 0)
		{	
			ifs.close();
			output = output.substr(0, output.size()-1);
			break;
		}
	}
	ofs << output;
	ofs.close();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:40:30 by cowen             #+#    #+#             */
/*   Updated: 2022/01/19 20:41:30 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <iomanip> 
# include <iostream>
# include "contact.hpp"
# include "phonebook.hpp"

void	check_argument(std::string str, Phonebook* phoneb);

#endif
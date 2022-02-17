/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:59:38 by cowen             #+#    #+#             */
/*   Updated: 2022/02/17 19:44:14 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


#endif

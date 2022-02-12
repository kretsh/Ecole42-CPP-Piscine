/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:30:02 by cowen             #+#    #+#             */
/*   Updated: 2022/02/11 22:30:48 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>

class Bureaucrat{
    private:
        const std::string	_name;
        int					_grade;
		class TooHighException : public std::exception{
			const char * what () const throw ();
		};
		class TooLowException : public std::exception{
			const char * what () const throw ();
		};
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		const std::string	getName();
		int			getGrade();
		void		increment();
		void		decrement();
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &data);